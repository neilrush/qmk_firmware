/*
<<<<<<<< HEAD:users/rmeli/rmeli.h
Copyright 2021-2022 Rocco Meli <@RMeli>
========
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
>>>>>>>> origin/playground:keyboards/handwired/reclined/keymaps/pdl/config.h

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

#ifdef UNICODEMAP_ENABLE
#    include "keyrecords/unicode.h"
#endif

<<<<<<<< HEAD:users/rmeli/rmeli.h
#ifdef OLED_ENABLE
#    include "oled/oled.h"
#endif

#ifdef TAP_DANCE_ENABLE
#    include "keyrecords/tap_dances.h"
#endif
========
#define TAPPING_TERM 200
>>>>>>>> origin/playground:keyboards/handwired/reclined/keymaps/pdl/config.h
