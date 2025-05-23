// Copyright 2024 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include "quantum.h"

#ifdef OLED_ENABLE
oled_rotation_t oled_init_kb(oled_rotation_t rotation) {
    return OLED_ROTATION_180;
}

#endif
