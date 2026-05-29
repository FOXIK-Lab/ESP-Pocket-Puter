#pragma once

#include "../universal_remote.hpp"

const Remote PROJECTORS_REMOTES[] PROGMEM = {
    {
        "Acer",
        REMOTE_TYPE_PROJECTOR,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "08 13 00 00", "87 78 00 00"},
            {"Source", REMOTE_PROTOCOL_NEC_EXT, "08 13 00 00", "8C 73 00 00"},
            {"Hide", REMOTE_PROTOCOL_NEC_EXT, "08 13 00 00", "8F 70 00 00"},
            {"Freeze", REMOTE_PROTOCOL_NEC_EXT, "08 13 00 00", "8E 71 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC_EXT, "08 13 00 00", "84 7B 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC_EXT, "08 13 00 00", "82 7D 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC_EXT, "08 13 00 00", "85 7A 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC_EXT, "08 13 00 00", "83 7C 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC_EXT, "08 13 00 00", "08 13 00 00"},
        }
    },
    {
        "Benq",
        REMOTE_TYPE_PROJECTOR,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "00 30 00 00", "4F B0 00 00"},
            {"Off", REMOTE_PROTOCOL_NEC_EXT, "00 30 00 00", "4E B1 00 00"},
            {"Eco", REMOTE_PROTOCOL_NEC_EXT, "00 30 00 00", "07 F8 00 00"},
            {"Source", REMOTE_PROTOCOL_NEC_EXT, "00 30 00 00", "04 FB 00 00"},
            {"Input", REMOTE_PROTOCOL_NEC_EXT, "00 30 00 00", "0C F3 00 00"},
            {"Freeze", REMOTE_PROTOCOL_NEC_EXT, "00 30 00 00", "03 FC 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC_EXT, "00 30 00 00", "03 FC 00 00"},
            {"Home", REMOTE_PROTOCOL_NEC_EXT, "00 30 00 00", "1A E5 00 00"},
        }
    },
    {
        "Optoma 1",
        REMOTE_TYPE_PROJECTOR,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "4F 50 00 00", "02 FD 00 00"},
            {"Freeze", REMOTE_PROTOCOL_NEC_EXT, "4F 50 00 00", "0C F3 00 00"},
            {"Hide", REMOTE_PROTOCOL_NEC_EXT, "4F 50 00 00", "03 FC 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC_EXT, "4F 50 00 00", "11 EE 00 00"},
        }
    },
    {
        "Optoma 2",
        REMOTE_TYPE_PROJECTOR,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "32 00 00 00", "02 00 00 00"},
            {"Off", REMOTE_PROTOCOL_NEC_EXT, "32 00 00 00", "2E 00 00 00"},
            {"Input", REMOTE_PROTOCOL_NEC_EXT, "32 00 00 00", "18 00 00 00"},
            {"Freeze", REMOTE_PROTOCOL_NEC_EXT, "32 00 00 00", "06 00 00 00"},
            {"Info", REMOTE_PROTOCOL_NEC_EXT, "32 00 00 00", "25 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC_EXT, "32 00 00 00", "88 00 00 00"},
        }
    },
    {
        "Epson",
        REMOTE_TYPE_PROJECTOR,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "83 55 00 00", "90 6F 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC_EXT, "83 55 00 00", "95 6A 00 00"},
            {"Freeze", REMOTE_PROTOCOL_NEC_EXT, "83 55 00 00", "92 6D 00 00"}
        }
    },
    {
        "Viewsonic",
        REMOTE_TYPE_PROJECTOR,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "83 F4 00 00", "4F B0 00 00"},
            {"Off", REMOTE_PROTOCOL_NEC_EXT, "83 F4 00 00", "4E B1 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC_EXT, "83 F4 00 00", "30 CF 00 00"},
            {"Freeze", REMOTE_PROTOCOL_NEC_EXT, "83 F4 00 00", "03 FC 00 00"},
        }
    },

    // ===== НОВЫЕ БРЕНДЫ ИЗ FLIPPER-IRDB =====

    {
        "Sony",
        REMOTE_TYPE_PROJECTOR,
        {
            {"Power", REMOTE_PROTOCOL_SONY, "01 00 00 00", "15 00 00 00"},
            {"Input", REMOTE_PROTOCOL_SONY, "01 00 00 00", "25 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_SONY, "01 00 00 00", "30 00 00 00"},
            {"Enter", REMOTE_PROTOCOL_SONY, "01 00 00 00", "35 00 00 00"},
            {"Up", REMOTE_PROTOCOL_SONY, "01 00 00 00", "74 00 00 00"},
            {"Down", REMOTE_PROTOCOL_SONY, "01 00 00 00", "75 00 00 00"},
            {"Left", REMOTE_PROTOCOL_SONY, "01 00 00 00", "34 00 00 00"},
            {"Right", REMOTE_PROTOCOL_SONY, "01 00 00 00", "33 00 00 00"},
            {"Freeze", REMOTE_PROTOCOL_SONY, "01 00 00 00", "45 00 00 00"},
            {"DZoom+", REMOTE_PROTOCOL_SONY, "01 00 00 00", "52 00 00 00"},
            {"DZoom-", REMOTE_PROTOCOL_SONY, "01 00 00 00", "53 00 00 00"},
            {"Mute", REMOTE_PROTOCOL_SONY, "01 00 00 00", "14 00 00 00"},
        }
    },
    {
        "Panasonic",
        REMOTE_TYPE_PROJECTOR,
        {
            {"Power", REMOTE_PROTOCOL_KASEIKYO, "80 02 20 00", "D0 03 00 00"},
            {"Input", REMOTE_PROTOCOL_KASEIKYO, "80 02 20 00", "10 05 00 00"},
            {"Menu", REMOTE_PROTOCOL_KASEIKYO, "80 02 20 00", "20 01 00 00"},
            {"Enter", REMOTE_PROTOCOL_KASEIKYO, "80 02 20 00", "90 00 00 00"},
            {"Up", REMOTE_PROTOCOL_KASEIKYO, "80 02 20 01", "A0 00 00 00"},
            {"Down", REMOTE_PROTOCOL_KASEIKYO, "80 02 20 01", "B0 00 00 00"},
            {"Left", REMOTE_PROTOCOL_KASEIKYO, "80 02 20 01", "E0 00 00 00"},
            {"Right", REMOTE_PROTOCOL_KASEIKYO, "80 02 20 01", "F0 00 00 00"},
            {"Freeze", REMOTE_PROTOCOL_KASEIKYO, "80 02 20 00", "40 03 00 00"},
            {"Mute", REMOTE_PROTOCOL_KASEIKYO, "80 02 20 00", "20 03 00 00"},
            {"Vol+", REMOTE_PROTOCOL_KASEIKYO, "80 02 20 00", "00 02 00 00"},
            {"Vol-", REMOTE_PROTOCOL_KASEIKYO, "80 02 20 00", "10 02 00 00"},
        }
    },
    {
        "NEC",
        REMOTE_TYPE_PROJECTOR,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "01 00 00 00", "02 00 00 00"},
            {"PowerOff", REMOTE_PROTOCOL_NEC, "01 00 00 00", "03 00 00 00"},
            {"Input", REMOTE_PROTOCOL_NEC, "01 00 00 00", "0F 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC, "01 00 00 00", "10 00 00 00"},
            {"Enter", REMOTE_PROTOCOL_NEC, "01 00 00 00", "11 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC, "01 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC, "01 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC, "01 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC, "01 00 00 00", "15 00 00 00"},
            {"Freeze", REMOTE_PROTOCOL_NEC, "01 00 00 00", "20 00 00 00"},
            {"Mute", REMOTE_PROTOCOL_NEC, "01 00 00 00", "21 00 00 00"},
            {"Auto", REMOTE_PROTOCOL_NEC, "01 00 00 00", "30 00 00 00"},
        }
    },
    {
        "Dell",
        REMOTE_TYPE_PROJECTOR,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "20 DF 00 00", "02 FD 00 00"},
            {"Source", REMOTE_PROTOCOL_NEC_EXT, "20 DF 00 00", "04 FB 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC_EXT, "20 DF 00 00", "10 EF 00 00"},
            {"Enter", REMOTE_PROTOCOL_NEC_EXT, "20 DF 00 00", "11 EE 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC_EXT, "20 DF 00 00", "12 ED 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC_EXT, "20 DF 00 00", "13 EC 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC_EXT, "20 DF 00 00", "14 EB 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC_EXT, "20 DF 00 00", "15 EA 00 00"},
            {"Freeze", REMOTE_PROTOCOL_NEC_EXT, "20 DF 00 00", "20 E0 00 00"},
            {"Blank", REMOTE_PROTOCOL_NEC_EXT, "20 DF 00 00", "21 DF 00 00"},
            {"Vol+", REMOTE_PROTOCOL_NEC_EXT, "20 DF 00 00", "30 D0 00 00"},
            {"Vol-", REMOTE_PROTOCOL_NEC_EXT, "20 DF 00 00", "31 CF 00 00"},
        }
    },
    {
        "LG",
        REMOTE_TYPE_PROJECTOR,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "04 00 00 00", "08 00 00 00"},
            {"Input", REMOTE_PROTOCOL_NEC, "04 00 00 00", "0B 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC, "04 00 00 00", "43 00 00 00"},
            {"Enter", REMOTE_PROTOCOL_NEC, "04 00 00 00", "44 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC, "04 00 00 00", "40 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC, "04 00 00 00", "41 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC, "04 00 00 00", "07 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC, "04 00 00 00", "06 00 00 00"},
            {"Freeze", REMOTE_PROTOCOL_NEC, "04 00 00 00", "50 00 00 00"},
            {"Mute", REMOTE_PROTOCOL_NEC, "04 00 00 00", "09 00 00 00"},
            {"Vol+", REMOTE_PROTOCOL_NEC, "04 00 00 00", "02 00 00 00"},
            {"Vol-", REMOTE_PROTOCOL_NEC, "04 00 00 00", "03 00 00 00"},
        }
    },
    {
        "Mitsubishi",
        REMOTE_TYPE_PROJECTOR,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Input", REMOTE_PROTOCOL_NEC, "00 00 00 00", "0F 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC, "00 00 00 00", "10 00 00 00"},
            {"Enter", REMOTE_PROTOCOL_NEC, "00 00 00 00", "11 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC, "00 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC, "00 00 00 00", "15 00 00 00"},
            {"Freeze", REMOTE_PROTOCOL_NEC, "00 00 00 00", "20 00 00 00"},
            {"Blank", REMOTE_PROTOCOL_NEC, "00 00 00 00", "21 00 00 00"},
            {"Auto", REMOTE_PROTOCOL_NEC, "00 00 00 00", "30 00 00 00"},
        }
    },
    {
        "Hitachi",
        REMOTE_TYPE_PROJECTOR,
        {
            {"Power", REMOTE_PROTOCOL_RC5, "03 00 00 00", "0C 00 00 00"},
            {"Input", REMOTE_PROTOCOL_RC5, "03 00 00 00", "38 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_RC5, "03 00 00 00", "30 00 00 00"},
            {"Enter", REMOTE_PROTOCOL_RC5, "03 00 00 00", "35 00 00 00"},
            {"Up", REMOTE_PROTOCOL_RC5, "03 00 00 00", "14 00 00 00"},
            {"Down", REMOTE_PROTOCOL_RC5, "03 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_RC5, "03 00 00 00", "15 00 00 00"},
            {"Right", REMOTE_PROTOCOL_RC5, "03 00 00 00", "16 00 00 00"},
            {"Freeze", REMOTE_PROTOCOL_RC5, "03 00 00 00", "40 00 00 00"},
            {"Blank", REMOTE_PROTOCOL_RC5, "03 00 00 00", "41 00 00 00"},
            {"Mute", REMOTE_PROTOCOL_RC5, "03 00 00 00", "0D 00 00 00"},
        }
    },
    {
        "Sanyo",
        REMOTE_TYPE_PROJECTOR,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Input", REMOTE_PROTOCOL_NEC, "00 00 00 00", "0F 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC, "00 00 00 00", "10 00 00 00"},
            {"Enter", REMOTE_PROTOCOL_NEC, "00 00 00 00", "11 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC, "00 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC, "00 00 00 00", "15 00 00 00"},
            {"Freeze", REMOTE_PROTOCOL_NEC, "00 00 00 00", "20 00 00 00"},
            {"Blank", REMOTE_PROTOCOL_NEC, "00 00 00 00", "21 00 00 00"},
        }
    },
    {
        "Vivitek",
        REMOTE_TYPE_PROJECTOR,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "40 BF 00 00", "02 FD 00 00"},
            {"Source", REMOTE_PROTOCOL_NEC_EXT, "40 BF 00 00", "04 FB 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC_EXT, "40 BF 00 00", "10 EF 00 00"},
            {"Enter", REMOTE_PROTOCOL_NEC_EXT, "40 BF 00 00", "11 EE 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC_EXT, "40 BF 00 00", "12 ED 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC_EXT, "40 BF 00 00", "13 EC 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC_EXT, "40 BF 00 00", "14 EB 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC_EXT, "40 BF 00 00", "15 EA 00 00"},
            {"Freeze", REMOTE_PROTOCOL_NEC_EXT, "40 BF 00 00", "20 E0 00 00"},
            {"Blank", REMOTE_PROTOCOL_NEC_EXT, "40 BF 00 00", "21 DF 00 00"},
            {"Mute", REMOTE_PROTOCOL_NEC_EXT, "40 BF 00 00", "30 D0 00 00"},
        }
    },
    {
        "InFocus",
        REMOTE_TYPE_PROJECTOR,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Input", REMOTE_PROTOCOL_NEC, "00 00 00 00", "0F 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC, "00 00 00 00", "10 00 00 00"},
            {"Enter", REMOTE_PROTOCOL_NEC, "00 00 00 00", "11 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC, "00 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC, "00 00 00 00", "15 00 00 00"},
            {"Freeze", REMOTE_PROTOCOL_NEC, "00 00 00 00", "20 00 00 00"},
            {"Blank", REMOTE_PROTOCOL_NEC, "00 00 00 00", "21 00 00 00"},
        }
    },
    {
        "Canon",
        REMOTE_TYPE_PROJECTOR,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Input", REMOTE_PROTOCOL_NEC, "00 00 00 00", "0F 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC, "00 00 00 00", "10 00 00 00"},
            {"Enter", REMOTE_PROTOCOL_NEC, "00 00 00 00", "11 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC, "00 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC, "00 00 00 00", "15 00 00 00"},
            {"Freeze", REMOTE_PROTOCOL_NEC, "00 00 00 00", "20 00 00 00"},
            {"Mute", REMOTE_PROTOCOL_NEC, "00 00 00 00", "21 00 00 00"},
        }
    },
    {
        "Casio",
        REMOTE_TYPE_PROJECTOR,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "10 EF 00 00", "02 FD 00 00"},
            {"Input", REMOTE_PROTOCOL_NEC_EXT, "10 EF 00 00", "0F F0 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC_EXT, "10 EF 00 00", "10 EF 00 00"},
            {"Enter", REMOTE_PROTOCOL_NEC_EXT, "10 EF 00 00", "11 EE 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC_EXT, "10 EF 00 00", "12 ED 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC_EXT, "10 EF 00 00", "13 EC 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC_EXT, "10 EF 00 00", "14 EB 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC_EXT, "10 EF 00 00", "15 EA 00 00"},
            {"Freeze", REMOTE_PROTOCOL_NEC_EXT, "10 EF 00 00", "20 E0 00 00"},
            {"Blank", REMOTE_PROTOCOL_NEC_EXT, "10 EF 00 00", "21 DF 00 00"},
        }
    },
    {
        "Sharp",
        REMOTE_TYPE_PROJECTOR,
        {
            {"Power", REMOTE_PROTOCOL_RAW, 38000, "195 1833 300 766 280 760 275 790 276 737 309 731 304 1801 301 1804 309 731 304 1801 270 795 282 758 277 762 273 1832 270 769 246 45851 326 1780 302 739 307 785 282 732 303 736 310 1795 307 732 303 763 303 1775 307 733 334 1798 273 1832 270 1810 251 814 273 1780 281 43762 302 1804 309 758 277 737 330 762 284 730 305 734 301 1803 310 1796 306 733 302 1829 273 767 279 734 301 791 275 1804 278 762 253 45870 307 1798 304 763 272 767 279 787 279 760 275 1829 284 730 305 734 301 1804 309 757 278 1827 275 1804 278 1828 274 765 270 1835 278 43740 303 1776 306 787 279 760 275 765 281 759 307 758 277 1775 307 1799 303 736 299 1832 281 759 276 763 304 736 299 1832 281 733 302 45820 306 1800 302 764 282 758 277 788 278 762 284 1821 281 732 303 736 310 1796 307 733 302 1829 273 1806 276 1830 272 767 268 1837 245 43772 302 1778 304 789 277 762 284 756 279 786 249 765 301 1777 336 1770 301 764 282 1824 278 761 274 765 301 738 308 1824 278 761 274"},
            {"Menu", REMOTE_PROTOCOL_RAW, 38000, "283 1745 378 690 335 705 330 735 311 729 306 707 359 706 329 710 336 704 362 703 332 1744 358 710 336 704 331 1771 331 737 309 47997 281 1721 381 687 307 733 334 758 277 736 310 1741 361 1744 358 1747 366 1714 357 1748 334 735 331 1746 336 1717 416 705 299 1725 377 41639 361 1692 379 741 284 756 279 734 332 760 275 738 308 731 335 730 305 735 311 702 333 1769 333 735 311 703 363 1739 332 736 330 47871 334 1772 330 738 308 732 303 789 277 736 310 1766 305 1775 338 1768 334 1771 331 1748 334 761 274 1776 306 1800 333 735 249 1828 274 41664 306 1774 328 792 223 790 256 784 282 783 252 787 259 755 280 811 255 758 277 762 273 1830 283 785 250 815 251 1800 250 817 280"},
            {"Input", REMOTE_PROTOCOL_NEC, "00 00 00 00", "0F 00 00 00"},
            {"Freeze", REMOTE_PROTOCOL_NEC, "00 00 00 00", "20 00 00 00"},
            {"Blank", REMOTE_PROTOCOL_NEC, "00 00 00 00", "21 00 00 00"},
        }
    },
    {
        "Asus",
        REMOTE_TYPE_PROJECTOR,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Input", REMOTE_PROTOCOL_NEC, "00 00 00 00", "0F 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC, "00 00 00 00", "10 00 00 00"},
            {"Enter", REMOTE_PROTOCOL_NEC, "00 00 00 00", "11 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC, "00 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC, "00 00 00 00", "15 00 00 00"},
            {"Freeze", REMOTE_PROTOCOL_NEC, "00 00 00 00", "20 00 00 00"},
            {"Blank", REMOTE_PROTOCOL_NEC, "00 00 00 00", "21 00 00 00"},
            {"Mute", REMOTE_PROTOCOL_NEC, "00 00 00 00", "22 00 00 00"},
        }
    },
    {
        "HP",
        REMOTE_TYPE_PROJECTOR,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Input", REMOTE_PROTOCOL_NEC, "00 00 00 00", "0F 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC, "00 00 00 00", "10 00 00 00"},
            {"Enter", REMOTE_PROTOCOL_NEC, "00 00 00 00", "11 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC, "00 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC, "00 00 00 00", "15 00 00 00"},
            {"Freeze", REMOTE_PROTOCOL_NEC, "00 00 00 00", "20 00 00 00"},
            {"Blank", REMOTE_PROTOCOL_NEC, "00 00 00 00", "21 00 00 00"},
        }
    },
    {
        "Christie",
        REMOTE_TYPE_PROJECTOR,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "10 EF 00 00", "02 FD 00 00"},
            {"Input", REMOTE_PROTOCOL_NEC_EXT, "10 EF 00 00", "0F F0 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC_EXT, "10 EF 00 00", "10 EF 00 00"},
            {"Enter", REMOTE_PROTOCOL_NEC_EXT, "10 EF 00 00", "11 EE 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC_EXT, "10 EF 00 00", "12 ED 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC_EXT, "10 EF 00 00", "13 EC 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC_EXT, "10 EF 00 00", "14 EB 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC_EXT, "10 EF 00 00", "15 EA 00 00"},
            {"Freeze", REMOTE_PROTOCOL_NEC_EXT, "10 EF 00 00", "20 E0 00 00"},
            {"Blank", REMOTE_PROTOCOL_NEC_EXT, "10 EF 00 00", "21 DF 00 00"},
        }
    }
};
