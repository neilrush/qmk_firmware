/*
<<<<<<<< HEAD:keyboards/bolsa/damapad/keymaps/default/keymap.c
Copyright 2021 Matthew Dias
========
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
Copyright 2018 Daniel Perrett
>>>>>>>> origin/playground:keyboards/lets_split/keymaps/pdl/config.h

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

<<<<<<<< HEAD:keyboards/bolsa/damapad/keymaps/default/keymap.c
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
========

#define TAPPING_TERM 200
>>>>>>>> origin/playground:keyboards/lets_split/keymaps/pdl/config.h

    [0] = LAYOUT_wkl(
        KC_MPRV, KC_MPLY, KC_MNXT, KC_MSTP, KC_MSEL, KC_MUTE,
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_PGUP,  
        KC_NO,   KC_COPY,          KC_PASTE,         KC_PGDN
    )

};

<<<<<<<< HEAD:keyboards/bolsa/damapad/keymaps/default/keymap.c
========
/* Select hand configuration */

//#define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS
>>>>>>>> origin/playground:keyboards/lets_split/keymaps/pdl/config.h
