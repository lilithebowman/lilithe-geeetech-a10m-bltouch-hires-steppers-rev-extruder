/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../../../../inc/MarlinConfigPre.h"

#define NOTOSANS 123
#if HAS_GRAPHICAL_TFT && TFT_FONT == NOTOSANS

#include <stdint.h>

// NotoSans Medium Vietnamese 26pt, capital 'A' heigth: 19px, width: 100%, range: 0x0102-0x1ef9, glyphs: 107
extern const uint8_t NotoSans_Medium_Vietnamese_19[11142] = {
  162,19,2,1,249,30,25,249, // unifont_t
  // 0x0102  Ă
  2,1,17,25,125,17,0,0,0,80,1,64,0,0,176,7,128,0,0,63,255,0,0,0,31,252,0,0,0,0,0,0,0,0,0,0,0,0,0,2,160,0,0,0,7,244,0,0,0,15,252,0,0,0,15,188,0,0,0,47,62,0,0,0,62,47,0,0,0,125,31,64,0,0,188,15,128,0,0,248,11,192,0,1,244,7,208,0,3,240,3,240,0,3,255,255,240,0,11,255,255,248,0,15,234,170,252,0,31,128,0,189,0,47,0,0,126,0,63,0,0,63,0,125,0,0,47,64,252,0,0,15,192,
  // 0x0103  ă
  3,1,12,21,63,15,1,255,5,0,20,11,64,120,3,255,240,1,255,192,0,0,0,0,4,0,7,255,224,15,255,252,10,0,190,0,0,63,0,0,63,0,21,191,11,255,255,63,229,127,190,0,63,252,0,63,252,0,127,190,1,255,63,255,239,31,254,31,0,0,0,
  // 0x0110  Đ
  16,1,18,19,95,19,0,0,2,170,148,0,0,7,255,255,208,0,7,255,255,248,0,7,208,2,254,0,7,208,0,63,64,7,208,0,31,192,7,208,0,15,192,7,208,0,11,208,27,229,64,11,208,127,255,224,7,208,127,255,224,11,208,7,208,0,11,208,7,208,0,15,192,7,208,0,31,192,7,208,0,63,64,7,208,0,255,0,7,229,111,252,0,7,255,255,224,0,7,255,249,0,0,
  // 0x0111  đ
  17,1,15,21,84,16,1,255,0,0,11,128,0,0,15,192,0,26,175,228,0,63,255,252,0,21,95,212,0,0,15,192,1,255,79,192,11,255,235,192,47,213,191,192,63,0,47,192,126,0,15,192,189,0,15,192,189,0,11,192,188,0,11,192,189,0,11,192,125,0,15,192,63,0,31,192,47,128,127,192,15,255,251,192,2,255,135,192,0,0,0,0,
  // 0x0128  Ĩ
  40,1,10,25,75,9,0,0,0,0,64,63,129,208,255,255,192,224,191,64,64,0,0,0,0,0,42,170,0,63,255,0,11,249,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,63,255,0,63,255,0,
  // 0x0129  ĩ
  41,1,10,20,60,7,255,0,0,0,64,63,129,208,255,255,192,208,191,64,64,0,0,0,0,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,
  // 0x0168  Ũ
  104,1,15,26,104,19,2,255,0,0,1,0,0,254,7,64,3,255,255,0,3,130,253,0,1,0,0,0,0,0,0,0,104,0,0,164,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,126,0,1,248,63,0,3,240,47,208,31,224,11,255,255,128,1,255,253,0,0,0,0,0,
  // 0x0169  ũ
  105,1,12,21,63,16,2,255,0,0,4,7,244,44,15,255,248,44,15,240,0,0,0,0,0,0,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,63,252,0,127,191,1,255,63,255,239,15,255,15,0,0,0,
  // 0x01a0  Ơ
  160,1,20,21,105,21,1,255,0,0,0,0,47,0,10,250,64,63,0,191,255,244,62,3,255,171,253,188,15,240,0,127,244,31,192,0,31,192,63,64,0,15,192,63,0,0,11,208,126,0,0,7,224,126,0,0,3,240,126,0,0,3,240,126,0,0,3,240,126,0,0,3,224,63,0,0,7,224,63,0,0,11,208,47,128,0,15,192,15,208,0,63,64,7,249,2,254,0,1,255,255,248,0,0,47,255,208,0,0,0,0,0,0,
  // 0x01a1  ơ
  161,1,17,17,85,17,1,255,0,0,0,47,64,0,0,0,63,0,1,255,244,62,0,11,255,254,252,0,47,192,127,224,0,63,0,15,192,0,126,0,11,192,0,189,0,7,208,0,188,0,7,208,0,188,0,7,208,0,125,0,7,208,0,126,0,11,192,0,63,0,15,192,0,31,192,127,64,0,11,255,254,0,0,1,255,244,0,0,0,0,0,0,0,
  // 0x01af  Ư
  175,1,20,21,105,21,2,255,0,0,0,0,62,104,0,0,164,126,188,0,0,252,188,188,0,0,253,248,188,0,0,255,240,188,0,0,254,64,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,126,0,1,248,0,63,0,3,244,0,31,224,31,224,0,11,255,255,192,0,1,255,253,0,0,0,0,0,0,0,
  // 0x01b0  ư
  176,1,17,17,85,18,2,255,0,0,0,15,192,0,0,0,15,192,252,0,47,31,64,252,0,47,191,0,252,0,47,248,0,252,0,47,64,0,252,0,47,0,0,252,0,47,0,0,252,0,47,0,0,252,0,47,0,0,252,0,47,0,0,252,0,63,0,0,252,0,127,0,0,191,1,255,0,0,63,255,239,0,0,15,255,15,0,0,0,0,0,0,0,
  // 0x0303  ̃
  3,3,10,4,12,0,243,15,47,208,224,127,255,208,240,127,128,0,0,0,
  // 0x0309  ̉
  9,3,5,7,14,0,246,15,84,0,255,128,71,192,3,192,47,128,60,0,24,0,
  // 0x0323  ̣
  35,3,4,4,4,0,246,251,4,125,126,44,
  // 0x0340  ̀
  64,3,6,5,10,0,251,15,127,0,47,64,11,192,1,240,0,16,
  // 0x0341  ́
  65,3,6,5,10,0,255,15,15,208,31,128,62,0,244,0,64,0,
  // 0x1ea0  Ạ
  160,30,17,24,120,17,0,251,0,2,160,0,0,0,7,244,0,0,0,15,252,0,0,0,15,188,0,0,0,47,62,0,0,0,62,47,0,0,0,125,31,64,0,0,188,15,128,0,0,248,11,192,0,1,244,7,208,0,3,240,3,240,0,3,255,255,240,0,11,255,255,248,0,15,234,170,252,0,31,128,0,189,0,47,0,0,126,0,63,0,0,63,0,125,0,0,47,64,252,0,0,15,192,0,0,0,0,0,0,0,64,0,0,0,3,240,0,0,0,3,240,0,0,0,1,208,0,0,
  // 0x1ea1  ạ
  161,30,12,20,60,15,1,251,0,4,0,7,255,224,15,255,252,10,0,190,0,0,63,0,0,63,0,21,191,11,255,255,63,229,127,190,0,63,252,0,63,252,0,127,190,1,255,63,255,239,31,254,31,0,0,0,0,4,0,0,63,0,0,63,0,0,45,0,
  // 0x1ea2  Ả
  162,30,17,27,135,17,0,0,0,1,64,0,0,0,15,248,0,0,0,0,124,0,0,0,0,60,0,0,0,1,248,0,0,0,2,208,0,0,0,1,128,0,0,0,0,0,0,0,0,2,160,0,0,0,7,244,0,0,0,15,252,0,0,0,15,188,0,0,0,47,62,0,0,0,62,47,0,0,0,125,31,64,0,0,188,15,128,0,0,248,11,192,0,1,244,7,208,0,3,240,3,240,0,3,255,255,240,0,11,255,255,248,0,15,234,170,252,0,31,128,0,189,0,47,0,0,126,0,63,0,0,63,0,125,0,0,47,64,252,0,0,15,192,
  // 0x1ea3  ả
  163,30,12,23,69,15,1,255,0,20,0,0,255,128,0,7,192,0,3,192,0,31,128,0,45,0,0,24,0,0,4,0,7,255,224,15,255,252,10,0,190,0,0,63,0,0,63,0,21,191,11,255,255,63,229,127,190,0,63,252,0,63,252,0,127,190,1,255,63,255,239,31,254,31,0,0,0,
  // 0x1ea4  Ấ
  164,30,17,26,130,17,0,0,0,0,0,21,0,0,0,0,60,0,0,3,240,244,0,0,15,252,64,0,0,46,46,0,0,0,116,7,64,0,0,0,0,0,0,0,2,160,0,0,0,7,244,0,0,0,15,252,0,0,0,15,188,0,0,0,47,62,0,0,0,62,47,0,0,0,125,31,64,0,0,188,15,128,0,0,248,11,192,0,1,244,7,208,0,3,240,3,240,0,3,255,255,240,0,11,255,255,248,0,15,234,170,252,0,31,128,0,189,0,47,0,0,126,0,63,0,0,63,0,125,0,0,47,64,252,0,0,15,192,
  // 0x1ea5  ấ
  165,30,14,22,88,15,1,255,0,0,3,208,0,21,11,64,0,255,157,0,2,247,208,0,7,128,240,0,0,0,0,0,0,4,0,0,7,255,224,0,15,255,252,0,10,0,190,0,0,0,63,0,0,0,63,0,0,21,191,0,11,255,255,0,63,229,127,0,190,0,63,0,252,0,63,0,252,0,127,0,190,1,255,0,63,255,239,0,31,254,31,0,0,0,0,0,
  // 0x1ea6  Ầ
  166,30,17,26,130,17,0,0,21,0,0,0,0,31,0,0,0,0,7,194,160,0,0,0,79,252,0,0,0,46,46,0,0,0,180,7,64,0,0,0,0,0,0,0,2,160,0,0,0,7,244,0,0,0,15,252,0,0,0,15,188,0,0,0,47,62,0,0,0,62,47,0,0,0,125,31,64,0,0,188,15,128,0,0,248,11,192,0,1,244,7,208,0,3,240,3,240,0,3,255,255,240,0,11,255,255,248,0,15,234,170,252,0,31,128,0,189,0,47,0,0,126,0,63,0,0,63,0,125,0,0,47,64,252,0,0,15,192,
  // 0x1ea7  ầ
  167,30,13,22,88,15,0,255,188,0,0,0,46,5,64,0,7,47,224,0,0,125,244,0,1,224,61,0,0,0,0,0,0,1,0,0,1,255,248,0,3,255,255,0,2,128,47,128,0,0,15,192,0,0,15,192,0,5,111,192,2,255,255,192,15,249,95,192,47,128,15,192,63,0,15,192,63,0,31,192,47,128,127,192,15,255,251,192,7,255,135,192,0,0,0,0,
  // 0x1ea8  Ẩ
  168,30,17,27,135,17,0,0,0,0,2,224,0,0,0,0,124,0,0,0,0,56,0,0,7,224,224,0,0,15,252,128,0,0,62,62,0,0,0,180,11,64,0,0,0,0,0,0,0,2,160,0,0,0,7,244,0,0,0,15,252,0,0,0,15,188,0,0,0,47,62,0,0,0,62,47,0,0,0,125,31,64,0,0,188,15,128,0,0,248,11,192,0,1,244,7,208,0,3,240,3,240,0,3,255,255,240,0,11,255,255,248,0,15,234,170,252,0,31,128,0,189,0,47,0,0,126,0,63,0,0,63,0,125,0,0,47,64,252,0,0,15,192,
  // 0x1ea9  ẩ
  169,30,13,24,96,15,1,255,0,0,25,0,0,0,27,192,0,0,2,192,0,21,15,64,0,191,140,0,1,247,208,0,7,128,180,0,0,0,0,0,0,4,0,0,7,255,224,0,15,255,252,0,10,0,190,0,0,0,63,0,0,0,63,0,0,21,191,0,11,255,255,0,63,229,127,0,190,0,63,0,252,0,63,0,252,0,127,0,190,1,255,0,63,255,239,0,31,254,31,0,0,0,0,0,
  // 0x1eaa  Ẫ
  170,30,17,27,135,17,0,0,0,63,211,128,0,0,118,255,0,0,0,80,24,0,0,0,2,160,0,0,0,11,252,0,0,0,46,46,0,0,0,116,7,64,0,0,0,0,0,0,0,2,160,0,0,0,7,244,0,0,0,15,252,0,0,0,15,188,0,0,0,47,62,0,0,0,62,47,0,0,0,125,31,64,0,0,188,15,128,0,0,248,11,192,0,1,244,7,208,0,3,240,3,240,0,3,255,255,240,0,11,255,255,248,0,15,234,170,252,0,31,128,0,189,0,47,0,0,126,0,63,0,0,63,0,125,0,0,47,64,252,0,0,15,192,
  // 0x1eab  ẫ
  171,30,12,24,72,15,1,255,2,244,56,7,255,240,10,6,208,0,21,0,0,191,64,1,247,208,7,128,240,0,0,0,0,4,0,7,255,224,15,255,252,10,0,190,0,0,63,0,0,63,0,21,191,11,255,255,63,229,127,190,0,63,252,0,63,252,0,127,190,1,255,63,255,239,31,254,31,0,0,0,
  // 0x1eac  Ậ
  172,30,17,30,150,17,0,251,0,7,244,0,0,0,15,252,0,0,0,63,63,0,0,0,248,11,192,0,0,64,0,64,0,0,0,0,0,0,0,2,160,0,0,0,7,244,0,0,0,15,252,0,0,0,15,188,0,0,0,47,62,0,0,0,62,47,0,0,0,125,31,64,0,0,188,15,128,0,0,248,11,192,0,1,244,7,208,0,3,240,3,240,0,3,255,255,240,0,11,255,255,248,0,15,234,170,252,0,31,128,0,189,0,47,0,0,126,0,63,0,0,63,0,125,0,0,47,64,252,0,0,15,192,0,0,0,0,0,0,0,64,0,0,0,3,240,0,0,0,3,240,0,0,0,1,224,0,0,
  // 0x1ead  ậ
  173,30,12,25,75,15,1,251,0,127,64,0,255,192,3,243,240,15,128,188,4,0,4,0,4,0,7,255,224,15,255,252,10,0,190,0,0,63,0,0,63,0,21,191,11,255,255,63,229,127,190,0,63,252,0,63,252,0,127,190,1,255,63,255,239,31,254,31,0,0,0,0,4,0,0,62,0,0,127,0,0,45,0,
  // 0x1eae  Ắ
  174,30,17,26,130,17,0,0,0,0,124,0,0,0,0,240,0,0,0,97,130,64,0,0,120,11,64,0,0,63,254,0,0,0,11,248,0,0,0,0,0,0,0,0,2,160,0,0,0,7,244,0,0,0,15,252,0,0,0,15,188,0,0,0,47,62,0,0,0,62,47,0,0,0,125,31,64,0,0,188,15,128,0,0,248,11,192,0,1,244,7,208,0,3,240,3,240,0,3,255,255,240,0,11,255,255,248,0,15,234,170,252,0,31,128,0,189,0,47,0,0,126,0,63,0,0,63,0,125,0,0,47,64,252,0,0,15,192,
  // 0x1eaf  ắ
  175,30,12,23,69,15,1,255,0,3,192,0,15,64,1,29,16,7,0,116,3,235,240,1,255,128,0,0,0,0,4,0,7,255,224,15,255,252,10,0,190,0,0,63,0,0,63,0,21,191,11,255,255,63,229,127,190,0,63,252,0,63,252,0,127,190,1,255,63,255,239,31,254,31,0,0,0,
  // 0x1eb0  Ằ
  176,30,17,26,130,17,0,0,0,15,0,0,0,0,7,192,0,0,0,97,130,64,0,0,120,11,64,0,0,63,254,0,0,0,11,244,0,0,0,0,0,0,0,0,2,160,0,0,0,7,244,0,0,0,15,252,0,0,0,15,188,0,0,0,47,62,0,0,0,62,47,0,0,0,125,31,64,0,0,188,15,128,0,0,248,11,192,0,1,244,7,208,0,3,240,3,240,0,3,255,255,240,0,11,255,255,248,0,15,234,170,252,0,31,128,0,189,0,47,0,0,126,0,63,0,0,63,0,125,0,0,47,64,252,0,0,15,192,
  // 0x1eb1  ằ
  177,30,12,23,69,15,1,255,1,240,0,0,184,0,5,44,16,7,0,116,3,235,240,1,255,128,0,0,0,0,4,0,7,255,224,15,255,252,10,0,190,0,0,63,0,0,63,0,21,191,11,255,255,63,229,127,190,0,63,252,0,63,252,0,127,190,1,255,63,255,239,31,254,31,0,0,0,
  // 0x1eb2  Ẳ
  178,30,17,27,135,17,0,0,0,3,240,0,0,0,0,116,0,0,0,0,176,0,0,0,97,130,64,0,0,120,11,64,0,0,63,254,0,0,0,11,244,0,0,0,0,0,0,0,0,2,160,0,0,0,7,244,0,0,0,15,252,0,0,0,15,188,0,0,0,47,62,0,0,0,62,47,0,0,0,125,31,64,0,0,188,15,128,0,0,248,11,192,0,1,244,7,208,0,3,240,3,240,0,3,255,255,240,0,11,255,255,248,0,15,234,170,252,0,31,128,0,189,0,47,0,0,126,0,63,0,0,63,0,125,0,0,47,64,252,0,0,15,192,
  // 0x1eb3  ẳ
  179,30,12,24,72,15,1,255,0,61,0,0,27,64,0,11,0,1,29,16,7,64,116,3,235,240,0,255,192,0,0,0,0,4,0,7,255,224,15,255,252,10,0,190,0,0,63,0,0,63,0,21,191,11,255,255,63,229,127,190,0,63,252,0,63,252,0,127,190,1,255,63,255,239,31,254,31,0,0,0,
  // 0x1eb4  Ẵ
  180,30,17,27,135,17,0,0,0,63,211,128,0,0,118,255,0,0,0,80,24,0,0,0,96,2,0,0,0,116,11,64,0,0,63,254,0,0,0,11,248,0,0,0,0,0,0,0,0,2,160,0,0,0,7,244,0,0,0,15,252,0,0,0,15,188,0,0,0,47,62,0,0,0,62,47,0,0,0,125,31,64,0,0,188,15,128,0,0,248,11,192,0,1,244,7,208,0,3,240,3,240,0,3,255,255,240,0,11,255,255,248,0,15,234,170,252,0,31,128,0,189,0,47,0,0,126,0,63,0,0,63,0,125,0,0,47,64,252,0,0,15,192,
  // 0x1eb5  ẵ
  181,30,12,24,72,15,1,255,1,244,40,7,255,244,10,6,208,0,0,0,7,0,116,3,234,240,1,255,192,0,0,0,0,4,0,7,255,224,15,255,252,10,0,190,0,0,63,0,0,63,0,21,191,11,255,255,63,229,127,190,0,63,252,0,63,252,0,127,190,1,255,63,255,239,31,254,31,0,0,0,
  // 0x1eb6  Ặ
  182,30,17,30,150,17,0,251,0,80,1,64,0,0,180,7,128,0,0,63,255,0,0,0,31,253,0,0,0,0,0,0,0,0,0,0,0,0,0,2,160,0,0,0,7,244,0,0,0,15,252,0,0,0,15,188,0,0,0,47,62,0,0,0,62,47,0,0,0,125,31,64,0,0,188,15,128,0,0,248,11,192,0,1,244,7,208,0,3,240,3,240,0,3,255,255,240,0,11,255,255,248,0,15,234,170,252,0,31,128,0,189,0,47,0,0,126,0,63,0,0,63,0,125,0,0,47,64,252,0,0,15,192,0,0,0,0,0,0,0,64,0,0,0,3,240,0,0,0,3,240,0,0,0,1,224,0,0,
  // 0x1eb7  ặ
  183,30,12,25,75,15,1,251,5,0,20,11,64,120,3,255,240,1,255,208,0,0,0,0,4,0,7,255,224,15,255,252,10,0,190,0,0,63,0,0,63,0,21,191,11,255,255,63,229,127,190,0,63,252,0,63,252,0,127,190,1,255,63,255,239,31,254,31,0,0,0,0,0,0,0,125,0,0,190,0,0,40,0,
  // 0x1eb8  Ẹ
  184,30,11,24,72,14,2,251,106,170,168,191,255,252,191,255,252,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,191,255,244,191,255,244,190,170,160,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,190,85,84,191,255,252,191,255,252,0,0,0,0,16,0,0,188,0,0,189,0,0,120,0,
  // 0x1eb9  ẹ
  185,30,13,19,76,15,1,251,1,255,224,0,11,255,252,0,31,128,126,0,63,0,47,0,125,0,31,64,126,85,111,128,191,255,255,128,190,170,170,64,189,0,0,0,126,0,0,0,63,0,0,0,31,208,6,0,11,255,255,0,1,255,253,0,0,1,0,0,0,4,0,0,0,47,0,0,0,63,64,0,0,30,0,0,
  // 0x1eba  Ẻ
  186,30,11,27,81,14,2,0,0,84,0,1,255,0,0,95,128,0,11,128,0,47,0,0,120,0,0,36,0,0,0,0,106,170,168,191,255,252,191,255,252,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,191,255,244,191,255,244,190,170,160,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,190,85,84,191,255,252,191,255,252,
  // 0x1ebb  ẻ
  187,30,13,23,92,15,1,255,0,21,0,0,0,127,192,0,0,22,224,0,0,2,224,0,0,11,208,0,0,15,0,0,0,9,0,0,0,0,0,0,1,255,224,0,11,255,252,0,31,128,126,0,63,0,47,0,125,0,31,64,126,85,111,128,191,255,255,128,190,170,170,64,189,0,0,0,126,0,0,0,63,0,0,0,31,208,6,0,11,255,255,0,1,255,253,0,0,1,0,0,
  // 0x1ebc  Ẽ
  188,30,11,24,72,14,2,0,11,244,56,47,255,244,56,31,224,0,0,0,0,0,0,106,170,168,191,255,252,191,255,252,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,191,255,244,191,255,244,190,170,160,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,190,85,84,191,255,252,191,255,252,
  // 0x1ebd  ẽ
  189,30,13,21,84,15,1,255,0,0,4,0,7,248,28,0,15,255,252,0,29,11,240,0,4,0,0,0,0,0,0,0,1,255,224,0,11,255,252,0,31,128,126,0,63,0,47,0,125,0,31,64,126,85,111,128,191,255,255,128,190,170,170,64,189,0,0,0,126,0,0,0,63,0,0,0,31,208,6,0,11,255,255,0,1,255,253,0,0,1,0,0,
  // 0x1ebe  Ế
  190,30,13,26,104,14,2,0,0,0,1,64,0,0,15,64,0,189,45,0,2,255,20,0,7,203,192,0,30,1,224,0,0,0,0,0,106,170,168,0,191,255,252,0,191,255,252,0,189,0,0,0,189,0,0,0,189,0,0,0,189,0,0,0,189,0,0,0,191,255,244,0,191,255,244,0,190,170,160,0,189,0,0,0,189,0,0,0,189,0,0,0,189,0,0,0,189,0,0,0,190,85,84,0,191,255,252,0,191,255,252,0,
  // 0x1ebf  ế
  191,30,14,22,88,15,1,255,0,0,3,224,0,21,11,128,0,191,206,0,1,247,224,0,3,192,180,0,0,0,0,0,0,0,0,0,1,255,224,0,11,255,252,0,31,128,126,0,63,0,47,0,125,0,31,64,126,85,111,128,191,255,255,128,190,170,170,64,189,0,0,0,126,0,0,0,63,0,0,0,31,208,6,0,11,255,255,0,1,255,253,0,0,1,0,0,
  // 0x1ec0  Ề
  192,30,12,26,78,14,1,0,80,0,0,244,0,0,60,42,64,5,191,192,1,241,240,3,128,124,0,0,0,26,170,170,47,255,255,47,255,255,47,64,0,47,64,0,47,64,0,47,64,0,47,64,0,47,255,253,47,255,253,47,170,168,47,64,0,47,64,0,47,64,0,47,64,0,47,64,0,47,149,85,47,255,255,47,255,255,
  // 0x1ec1  ề
  193,30,14,22,88,15,0,255,125,0,0,0,31,5,64,0,7,95,240,0,0,61,248,0,0,240,46,0,0,64,0,0,0,0,0,0,0,127,248,0,2,255,255,0,7,224,31,128,15,192,11,192,31,64,7,208,31,149,91,224,47,255,255,224,47,170,170,144,47,64,0,0,31,128,0,0,15,192,0,0,7,244,1,128,2,255,255,192,0,127,255,64,0,0,64,0,
  // 0x1ec2  Ể
  194,30,12,27,81,14,2,0,0,0,125,0,0,27,0,0,11,0,189,60,2,255,20,11,203,192,30,1,224,0,0,0,106,170,168,191,255,252,191,255,252,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,191,255,244,191,255,244,190,170,160,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,190,85,84,191,255,252,191,255,252,
  // 0x1ec3  ể
  195,30,13,24,96,15,1,255,0,0,26,0,0,0,27,192,0,0,2,192,0,21,15,64,0,191,141,0,1,247,224,0,7,192,180,0,0,0,0,0,0,0,0,0,1,255,224,0,11,255,252,0,31,128,126,0,63,0,47,0,125,0,31,64,126,85,111,128,191,255,255,128,190,170,170,64,189,0,0,0,126,0,0,0,63,0,0,0,31,208,6,0,11,255,255,0,1,255,253,0,0,1,0,0,
  // 0x1ec4  Ễ
  196,30,11,28,84,14,2,0,0,0,16,11,244,176,14,127,208,24,6,64,0,168,0,2,255,0,7,203,192,30,1,224,0,0,0,106,170,168,191,255,252,191,255,252,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,191,255,244,191,255,244,190,170,160,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,190,85,84,191,255,252,191,255,252,
  // 0x1ec5  ễ
  197,30,13,24,96,15,1,255,1,248,44,0,3,255,244,0,6,6,208,0,0,21,0,0,0,127,128,0,1,247,208,0,3,192,180,0,0,0,0,0,0,0,0,0,1,255,224,0,11,255,252,0,31,128,126,0,63,0,47,0,125,0,31,64,126,85,111,128,191,255,255,128,190,170,170,64,189,0,0,0,126,0,0,0,63,0,0,0,31,208,6,0,11,255,255,0,1,255,253,0,0,1,0,0,
  // 0x1ec6  Ệ
  198,30,11,30,90,14,2,251,0,254,0,2,255,64,7,215,208,31,1,244,4,0,16,0,0,0,106,170,168,191,255,252,191,255,252,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,191,255,244,191,255,244,190,170,160,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,190,85,84,191,255,252,191,255,252,0,0,0,0,16,0,0,188,0,0,189,0,0,120,0,
  // 0x1ec7  ệ
  199,30,13,25,100,15,1,251,0,127,64,0,0,255,192,0,3,243,240,0,11,128,188,0,4,0,4,0,0,0,0,0,1,255,224,0,11,255,252,0,31,128,126,0,63,0,47,0,125,0,31,64,126,85,111,128,191,255,255,128,190,170,170,64,189,0,0,0,126,0,0,0,63,0,0,0,31,208,6,0,11,255,255,0,1,255,253,0,0,1,0,0,0,4,0,0,0,47,0,0,0,63,64,0,0,30,0,0,
  // 0x1ec8  Ỉ
  200,30,7,26,52,9,1,0,10,128,31,240,0,184,0,244,7,224,7,128,1,0,170,168,255,252,47,228,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,255,252,255,252,
  // 0x1ec9  ỉ
  201,30,6,22,44,7,1,0,21,0,127,192,7,208,2,208,31,192,30,0,8,0,0,0,63,0,63,0,63,0,63,0,63,0,63,0,63,0,63,0,63,0,63,0,63,0,63,0,63,0,63,0,
  // 0x1eca  Ị
  202,30,7,24,48,9,1,251,170,168,255,252,47,228,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,255,252,255,252,0,0,1,0,15,192,15,192,7,128,
  // 0x1ecb  ị
  203,30,3,25,25,7,2,251,16,252,252,116,0,0,252,252,252,252,252,252,252,252,252,252,252,252,252,252,0,16,252,252,116,
  // 0x1ecc  Ọ
  204,30,18,24,120,20,1,251,0,10,254,64,0,0,191,255,244,0,3,255,171,253,0,15,240,0,127,0,31,192,0,31,128,63,64,0,15,192,63,0,0,11,208,126,0,0,7,224,126,0,0,3,224,126,0,0,3,240,126,0,0,3,240,126,0,0,3,224,63,0,0,7,224,63,0,0,11,208,47,128,0,15,192,15,208,0,63,64,7,249,2,254,0,1,255,255,248,0,0,47,255,208,0,0,0,0,0,0,0,0,16,0,0,0,0,248,0,0,0,1,248,0,0,0,0,180,0,0,
  // 0x1ecd  ọ
  205,30,14,19,76,16,1,251,1,255,244,0,11,255,253,0,47,208,127,64,63,0,15,192,126,0,11,192,189,0,7,208,188,0,7,208,188,0,7,208,125,0,7,208,126,0,11,192,63,0,15,192,31,208,127,64,11,255,254,0,1,255,244,0,0,0,0,0,0,4,0,0,0,47,0,0,0,47,64,0,0,14,0,0,
  // 0x1ece  Ỏ
  206,30,18,27,135,20,1,255,0,1,164,0,0,0,3,255,0,0,0,0,15,0,0,0,0,15,0,0,0,0,189,0,0,0,0,176,0,0,0,0,16,0,0,0,10,254,64,0,0,191,255,244,0,3,255,171,253,0,15,240,0,127,0,31,192,0,31,128,63,64,0,15,192,63,0,0,11,208,126,0,0,7,224,126,0,0,3,224,126,0,0,3,240,126,0,0,3,240,126,0,0,3,224,63,0,0,7,224,63,0,0,11,208,47,128,0,15,192,15,208,0,63,64,7,249,2,254,0,1,255,255,248,0,0,47,255,208,0,0,0,0,0,0,
  // 0x1ecf  ỏ
  207,30,14,23,92,16,1,255,0,21,0,0,0,63,208,0,0,22,240,0,0,1,240,0,0,11,208,0,0,15,0,0,0,9,0,0,0,0,0,0,1,255,244,0,11,255,253,0,47,208,127,64,63,0,15,192,126,0,11,192,189,0,7,208,188,0,7,208,188,0,7,208,125,0,7,208,126,0,11,192,63,0,15,192,31,208,127,64,11,255,254,0,1,255,244,0,0,0,0,0,
  // 0x1ed0  Ố
  208,30,18,27,135,20,1,255,0,0,0,5,0,0,0,0,47,0,0,1,248,60,0,0,3,254,80,0,0,15,79,64,0,0,60,2,192,0,0,0,0,0,0,0,10,254,64,0,0,191,255,244,0,3,255,171,253,0,15,240,0,127,0,31,192,0,31,128,63,64,0,15,192,63,0,0,11,208,126,0,0,7,224,126,0,0,3,224,126,0,0,3,240,126,0,0,3,240,126,0,0,3,224,63,0,0,7,224,63,0,0,11,208,47,128,0,15,192,15,208,0,63,64,7,249,2,254,0,1,255,255,248,0,0,47,255,208,0,0,0,0,0,0,
  // 0x1ed1  ố
  209,30,14,22,88,16,1,255,0,0,2,240,0,21,7,192,0,127,202,0,0,246,240,0,3,208,120,0,1,0,4,0,0,0,0,0,1,255,244,0,11,255,253,0,47,208,127,64,63,0,15,192,126,0,11,192,189,0,7,208,188,0,7,208,188,0,7,208,125,0,7,208,126,0,11,192,63,0,15,192,31,208,127,64,11,255,254,0,1,255,244,0,0,0,0,0,
  // 0x1ed2  Ồ
  210,30,18,27,135,20,1,255,5,0,0,0,0,7,192,0,0,0,2,225,168,0,0,0,83,254,0,0,0,15,79,64,0,0,45,2,192,0,0,0,0,0,0,0,10,254,64,0,0,191,255,244,0,3,255,171,253,0,15,240,0,127,0,31,192,0,31,128,63,64,0,15,192,63,0,0,11,208,126,0,0,7,224,126,0,0,3,224,126,0,0,3,240,126,0,0,3,240,126,0,0,3,224,63,0,0,7,224,63,0,0,11,208,47,128,0,15,192,15,208,0,63,64,7,249,2,254,0,1,255,255,248,0,0,47,255,208,0,0,0,0,0,0,
  // 0x1ed3  ồ
  211,30,14,22,88,16,1,255,244,0,0,0,60,21,0,0,10,127,192,0,0,246,240,0,3,208,120,0,1,0,4,0,0,0,0,0,1,255,244,0,11,255,253,0,47,208,127,64,63,0,15,192,126,0,11,192,189,0,7,208,188,0,7,208,188,0,7,208,125,0,7,208,126,0,11,192,63,0,15,192,31,208,127,64,11,255,254,0,1,255,244,0,0,0,0,0,
  // 0x1ed4  Ổ
  212,30,18,28,140,20,1,255,0,0,0,248,0,0,0,0,94,0,0,0,0,29,0,0,1,248,116,0,0,7,254,32,0,0,15,79,64,0,0,60,2,192,0,0,0,0,0,0,0,10,254,64,0,0,191,255,244,0,3,255,171,253,0,15,240,0,127,0,31,192,0,31,128,63,64,0,15,192,63,0,0,11,208,126,0,0,7,224,126,0,0,3,224,126,0,0,3,240,126,0,0,3,240,126,0,0,3,224,63,0,0,7,224,63,0,0,11,208,47,128,0,15,192,15,208,0,63,64,7,249,2,254,0,1,255,255,248,0,0,47,255,208,0,0,0,0,0,0,
  // 0x1ed5  ổ
  213,30,14,24,96,16,1,255,0,0,10,0,0,0,11,192,0,0,1,208,0,21,11,128,0,127,198,0,0,246,240,0,3,208,120,0,1,0,4,0,0,0,0,0,1,255,244,0,11,255,253,0,47,208,127,64,63,0,15,192,126,0,11,192,189,0,7,208,188,0,7,208,188,0,7,208,125,0,7,208,126,0,11,192,63,0,15,192,31,208,127,64,11,255,254,0,1,255,244,0,0,0,0,0,
  // 0x1ed6  Ỗ
  214,30,18,29,145,20,1,255,0,0,0,64,0,0,15,225,208,0,0,45,191,192,0,0,32,9,0,0,0,1,168,0,0,0,3,253,0,0,0,15,79,64,0,0,60,2,192,0,0,0,0,0,0,0,10,254,64,0,0,191,255,244,0,3,255,171,253,0,15,240,0,127,0,31,192,0,31,128,63,64,0,15,192,63,0,0,11,208,126,0,0,7,224,126,0,0,3,224,126,0,0,3,240,126,0,0,3,240,126,0,0,3,224,63,0,0,7,224,63,0,0,11,208,47,128,0,15,192,15,208,0,63,64,7,249,2,254,0,1,255,255,248,0,0,47,255,208,0,0,0,0,0,0,
  // 0x1ed7  ỗ
  215,30,14,24,96,16,1,255,0,248,28,0,3,239,248,0,3,2,224,0,0,5,0,0,0,63,192,0,0,250,224,0,3,208,120,0,1,0,4,0,0,0,0,0,1,255,244,0,11,255,253,0,47,208,127,64,63,0,15,192,126,0,11,192,189,0,7,208,188,0,7,208,188,0,7,208,125,0,7,208,126,0,11,192,63,0,15,192,31,208,127,64,11,255,254,0,1,255,244,0,0,0,0,0,
  // 0x1ed8  Ộ
  216,30,18,30,150,20,1,251,0,2,252,0,0,0,7,254,0,0,0,15,143,128,0,0,61,3,224,0,0,16,0,0,0,0,0,0,0,0,0,10,254,64,0,0,191,255,244,0,3,255,171,253,0,15,240,0,127,0,31,192,0,31,128,63,64,0,15,192,63,0,0,11,208,126,0,0,7,224,126,0,0,3,224,126,0,0,3,240,126,0,0,3,240,126,0,0,3,224,63,0,0,7,224,63,0,0,11,208,47,128,0,15,192,15,208,0,63,64,7,249,2,254,0,1,255,255,248,0,0,47,255,208,0,0,0,0,0,0,0,0,16,0,0,0,0,248,0,0,0,1,248,0,0,0,0,180,0,0,
  // 0x1ed9  ộ
  217,30,14,25,100,16,1,251,0,63,128,0,0,191,208,0,1,245,244,0,7,192,125,0,1,0,4,0,0,0,0,0,1,255,244,0,11,255,253,0,47,208,127,64,63,0,15,192,126,0,11,192,189,0,7,208,188,0,7,208,188,0,7,208,125,0,7,208,126,0,11,192,63,0,15,192,31,208,127,64,11,255,254,0,1,255,244,0,0,0,0,0,0,4,0,0,0,47,0,0,0,47,64,0,0,14,0,0,
  // 0x1eda  Ớ
  218,30,20,26,130,21,1,255,0,0,15,192,0,0,0,63,64,0,0,0,189,0,0,0,0,240,0,0,0,0,64,0,0,0,0,0,0,47,0,10,250,64,63,0,191,255,244,62,3,255,171,253,188,15,240,0,127,244,31,192,0,31,192,63,64,0,15,192,63,0,0,11,208,126,0,0,7,224,126,0,0,3,240,126,0,0,3,240,126,0,0,3,240,126,0,0,3,224,63,0,0,7,224,63,0,0,11,208,47,128,0,15,192,15,208,0,63,64,7,249,2,254,0,1,255,255,248,0,0,47,255,208,0,0,0,0,0,0,
  // 0x1edb  ớ
  219,30,17,21,105,17,1,255,0,1,248,0,0,0,3,240,0,0,0,15,192,0,0,0,47,0,0,0,0,0,0,47,64,0,0,0,63,0,1,255,244,62,0,11,255,254,252,0,47,192,127,224,0,63,0,15,192,0,126,0,11,192,0,189,0,7,208,0,188,0,7,208,0,188,0,7,208,0,125,0,7,208,0,126,0,11,192,0,63,0,15,192,0,31,192,127,64,0,11,255,254,0,0,1,255,244,0,0,0,0,0,0,0,
  // 0x1edc  Ờ
  220,30,20,26,130,21,1,255,0,31,128,0,0,0,11,208,0,0,0,2,240,0,0,0,0,188,0,0,0,0,4,0,0,0,0,0,0,47,0,10,250,64,63,0,191,255,244,62,3,255,171,253,188,15,240,0,127,244,31,192,0,31,192,63,64,0,15,192,63,0,0,11,208,126,0,0,7,224,126,0,0,3,240,126,0,0,3,240,126,0,0,3,240,126,0,0,3,224,63,0,0,7,224,63,0,0,11,208,47,128,0,15,192,15,208,0,63,64,7,249,2,254,0,1,255,255,248,0,0,47,255,208,0,0,0,0,0,0,
  // 0x1edd  ờ
  221,30,17,21,105,17,1,255,2,244,0,0,0,0,252,0,0,0,0,63,0,0,0,0,15,128,0,0,0,0,0,47,64,0,0,0,63,0,1,255,244,62,0,11,255,254,252,0,47,192,127,224,0,63,0,15,192,0,126,0,11,192,0,189,0,7,208,0,188,0,7,208,0,188,0,7,208,0,125,0,7,208,0,126,0,11,192,0,63,0,15,192,0,31,192,127,64,0,11,255,254,0,0,1,255,244,0,0,0,0,0,0,0,
  // 0x1ede  Ở
  222,30,20,28,140,21,1,255,0,1,80,0,0,0,3,253,0,0,0,1,111,0,0,0,0,31,0,0,0,0,189,0,0,0,0,240,0,0,0,0,160,0,0,0,0,0,0,47,0,10,250,64,63,0,191,255,244,62,3,255,171,253,188,15,240,0,127,244,31,192,0,31,192,63,64,0,15,192,63,0,0,11,208,126,0,0,7,224,126,0,0,3,240,126,0,0,3,240,126,0,0,3,240,126,0,0,3,224,63,0,0,7,224,63,0,0,11,208,47,128,0,15,192,15,208,0,63,64,7,249,2,254,0,1,255,255,248,0,0,47,255,208,0,0,0,0,0,0,
  // 0x1edf  ở
  223,30,17,23,115,17,1,255,0,21,0,0,0,0,127,192,0,0,0,23,224,0,0,0,2,224,0,0,0,11,192,0,0,0,30,0,0,0,0,9,0,47,64,0,0,0,63,0,1,255,244,62,0,11,255,254,252,0,47,192,127,224,0,63,0,15,192,0,126,0,11,192,0,189,0,7,208,0,188,0,7,208,0,188,0,7,208,0,125,0,7,208,0,126,0,11,192,0,63,0,15,192,0,31,192,127,64,0,11,255,254,0,0,1,255,244,0,0,0,0,0,0,0,
  // 0x1ee0  Ỡ
  224,30,20,26,130,21,1,255,0,0,0,16,0,0,31,208,176,0,0,63,255,224,0,0,176,63,192,0,0,0,0,0,0,0,0,0,0,47,0,10,250,64,63,0,191,255,244,62,3,255,171,253,188,15,240,0,127,244,31,192,0,31,192,63,64,0,15,192,63,0,0,11,208,126,0,0,7,224,126,0,0,3,240,126,0,0,3,240,126,0,0,3,240,126,0,0,3,224,63,0,0,7,224,63,0,0,11,208,47,128,0,15,192,15,208,0,63,64,7,249,2,254,0,1,255,255,248,0,0,47,255,208,0,0,0,0,0,0,
  // 0x1ee1  ỡ
  225,30,17,20,100,17,1,255,2,253,14,0,0,11,255,253,0,0,15,7,248,0,0,0,0,0,47,64,0,0,0,63,0,1,255,244,62,0,11,255,254,252,0,47,192,127,224,0,63,0,15,192,0,126,0,11,192,0,189,0,7,208,0,188,0,7,208,0,188,0,7,208,0,125,0,7,208,0,126,0,11,192,0,63,0,15,192,0,31,192,127,64,0,11,255,254,0,0,1,255,244,0,0,0,0,0,0,0,
  // 0x1ee2  Ợ
  226,30,20,25,125,21,1,251,0,0,0,0,47,0,10,250,64,63,0,191,255,244,62,3,255,171,253,188,15,240,0,127,244,31,192,0,31,192,63,64,0,15,192,63,0,0,11,208,126,0,0,7,224,126,0,0,3,240,126,0,0,3,240,126,0,0,3,240,126,0,0,3,224,63,0,0,7,224,63,0,0,11,208,47,128,0,15,192,15,208,0,63,64,7,249,2,254,0,1,255,255,248,0,0,47,255,208,0,0,0,0,0,0,0,0,16,0,0,0,0,248,0,0,0,1,248,0,0,0,0,176,0,0,
  // 0x1ee3  ợ
  227,30,17,21,105,17,1,251,0,0,0,47,64,0,0,0,63,0,1,255,244,62,0,11,255,254,252,0,47,192,127,224,0,63,0,15,192,0,126,0,11,192,0,189,0,7,208,0,188,0,7,208,0,188,0,7,208,0,125,0,7,208,0,126,0,11,192,0,63,0,15,192,0,31,192,127,64,0,11,255,254,0,0,1,255,244,0,0,0,0,0,0,0,0,4,0,0,0,0,31,64,0,0,0,47,64,0,0,0,14,0,0,0,
  // 0x1ee4  Ụ
  228,30,15,24,96,19,2,251,104,0,0,164,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,126,0,1,248,63,0,3,240,47,208,31,224,11,255,255,128,1,255,253,0,0,0,0,0,0,1,0,0,0,15,192,0,0,15,192,0,0,7,64,0,
  // 0x1ee5  ụ
  229,30,12,19,57,16,2,251,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,63,252,0,127,191,1,255,63,255,239,15,255,15,0,0,0,0,16,0,0,188,0,0,189,0,0,120,0,
  // 0x1ee6  Ủ
  230,30,15,27,108,19,2,255,0,26,128,0,0,47,240,0,0,0,244,0,0,0,244,0,0,7,224,0,0,7,64,0,0,1,0,0,104,0,0,164,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,126,0,1,248,63,0,3,240,47,208,31,224,11,255,255,128,1,255,253,0,0,0,0,0,
  // 0x1ee7  ủ
  231,30,12,23,69,16,2,255,0,84,0,0,255,64,0,91,192,0,7,192,0,47,64,0,60,0,0,40,0,0,0,0,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,63,252,0,127,191,1,255,63,255,239,15,255,15,0,0,0,
  // 0x1ee8  Ứ
  232,30,20,26,130,21,2,255,0,0,253,0,0,0,1,248,0,0,0,3,224,0,0,0,15,128,0,0,0,4,0,0,0,0,0,0,0,62,104,0,0,164,126,188,0,0,252,188,188,0,0,253,248,188,0,0,255,240,188,0,0,254,64,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,126,0,1,248,0,63,0,3,244,0,31,224,31,224,0,11,255,255,192,0,1,255,253,0,0,0,0,0,0,0,
  // 0x1ee9  ứ
  233,30,17,21,105,18,2,255,0,3,240,0,0,0,15,192,0,0,0,47,0,0,0,0,124,0,0,0,0,16,0,15,192,0,0,0,15,192,252,0,47,31,64,252,0,47,191,0,252,0,47,248,0,252,0,47,64,0,252,0,47,0,0,252,0,47,0,0,252,0,47,0,0,252,0,47,0,0,252,0,47,0,0,252,0,63,0,0,252,0,127,0,0,191,1,255,0,0,63,255,239,0,0,15,255,15,0,0,0,0,0,0,0,
  // 0x1eea  Ừ
  234,30,20,26,130,21,2,255,0,252,0,0,0,0,127,0,0,0,0,31,64,0,0,0,3,208,0,0,0,0,64,0,0,0,0,0,0,62,104,0,0,164,126,188,0,0,252,188,188,0,0,253,248,188,0,0,255,240,188,0,0,254,64,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,126,0,1,248,0,63,0,3,244,0,31,224,31,224,0,11,255,255,192,0,1,255,253,0,0,0,0,0,0,0,
  // 0x1eeb  ừ
  235,30,17,21,105,18,2,255,7,224,0,0,0,2,244,0,0,0,0,188,0,0,0,0,47,0,0,0,0,1,0,15,192,0,0,0,15,192,252,0,47,31,64,252,0,47,191,0,252,0,47,248,0,252,0,47,64,0,252,0,47,0,0,252,0,47,0,0,252,0,47,0,0,252,0,47,0,0,252,0,47,0,0,252,0,63,0,0,252,0,127,0,0,191,1,255,0,0,63,255,239,0,0,15,255,15,0,0,0,0,0,0,0,
  // 0x1eec  Ử
  236,30,20,27,135,21,2,255,0,10,128,0,0,0,31,244,0,0,0,0,184,0,0,0,0,244,0,0,0,7,224,0,0,0,7,128,0,0,0,1,0,0,62,104,0,0,164,126,188,0,0,252,188,188,0,0,253,248,188,0,0,255,240,188,0,0,254,64,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,126,0,1,248,0,63,0,3,244,0,31,224,31,224,0,11,255,255,192,0,1,255,253,0,0,0,0,0,0,0,
  // 0x1eed  ử
  237,30,17,23,115,18,2,255,0,84,0,0,0,0,255,64,0,0,0,91,192,0,0,0,3,192,0,0,0,47,128,0,0,0,60,0,0,0,0,40,0,15,192,0,0,0,15,192,252,0,47,31,64,252,0,47,191,0,252,0,47,248,0,252,0,47,64,0,252,0,47,0,0,252,0,47,0,0,252,0,47,0,0,252,0,47,0,0,252,0,47,0,0,252,0,63,0,0,252,0,127,0,0,191,1,255,0,0,63,255,239,0,0,15,255,15,0,0,0,0,0,0,0,
  // 0x1eee  Ữ
  238,30,20,26,130,21,2,255,0,0,1,0,0,0,254,7,64,0,3,255,255,0,0,3,66,253,0,0,1,0,0,0,0,0,0,0,0,62,104,0,0,164,126,188,0,0,252,188,188,0,0,253,248,188,0,0,255,240,188,0,0,254,64,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,126,0,1,248,0,63,0,3,244,0,31,224,31,224,0,11,255,255,192,0,1,255,253,0,0,0,0,0,0,0,
  // 0x1eef  ữ
  239,30,17,21,105,18,2,255,0,0,4,0,0,11,244,44,0,0,31,255,248,0,0,44,31,240,0,0,0,0,0,15,192,0,0,0,15,192,252,0,47,31,64,252,0,47,191,0,252,0,47,248,0,252,0,47,64,0,252,0,47,0,0,252,0,47,0,0,252,0,47,0,0,252,0,47,0,0,252,0,47,0,0,252,0,63,0,0,252,0,127,0,0,191,1,255,0,0,63,255,239,0,0,15,255,15,0,0,0,0,0,0,0,
  // 0x1ef0  Ự
  240,30,20,25,125,21,2,251,0,0,0,0,62,104,0,0,164,126,188,0,0,252,188,188,0,0,253,248,188,0,0,255,240,188,0,0,254,64,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,188,0,0,252,0,126,0,1,248,0,63,0,3,244,0,31,224,31,224,0,11,255,255,192,0,1,255,253,0,0,0,0,0,0,0,0,1,0,0,0,0,11,192,0,0,0,15,192,0,0,0,7,128,0,0,
  // 0x1ef1  ự
  241,30,17,21,105,18,2,251,0,0,0,15,192,0,0,0,15,192,252,0,47,31,64,252,0,47,191,0,252,0,47,248,0,252,0,47,64,0,252,0,47,0,0,252,0,47,0,0,252,0,47,0,0,252,0,47,0,0,252,0,47,0,0,252,0,63,0,0,252,0,127,0,0,191,1,255,0,0,63,255,239,0,0,15,255,15,0,0,0,0,0,0,0,0,16,0,0,0,0,188,0,0,0,0,189,0,0,0,0,120,0,0,0,
  // 0x1ef2  Ỳ
  242,30,15,25,100,15,0,0,0,253,0,0,0,63,0,0,0,15,128,0,0,3,208,0,0,0,64,0,0,0,0,0,104,0,0,168,126,0,1,248,63,0,3,240,31,128,7,208,15,192,15,192,7,224,47,64,2,240,63,0,0,248,189,0,0,189,252,0,0,63,240,0,0,47,224,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,
  // 0x1ef3  ỳ
  243,30,14,27,108,14,0,249,2,248,0,0,0,252,0,0,0,63,0,0,0,11,128,0,0,0,0,0,0,0,0,0,252,0,7,224,126,0,15,192,63,0,15,192,47,64,31,64,15,128,63,0,15,192,62,0,7,208,188,0,3,224,252,0,2,240,244,0,0,246,240,0,0,251,224,0,0,127,208,0,0,63,192,0,0,47,128,0,0,47,0,0,0,63,0,0,0,125,0,0,1,252,0,0,191,240,0,0,191,192,0,0,0,0,0,0,
  // 0x1ef4  Ỵ
  244,30,15,24,96,15,0,251,104,0,0,168,126,0,1,248,63,0,3,240,31,128,7,208,15,192,15,192,7,224,47,64,2,240,63,0,0,248,189,0,0,189,252,0,0,63,240,0,0,47,224,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,0,0,0,0,1,0,0,0,15,192,0,0,15,192,0,0,7,64,0,
  // 0x1ef5  ỵ
  245,30,14,21,84,14,0,249,252,0,7,224,126,0,15,192,63,0,15,192,47,64,31,64,15,128,63,0,15,192,62,0,7,208,188,0,3,224,252,0,2,240,244,0,0,246,240,0,0,251,224,0,0,127,208,0,0,63,192,0,0,47,128,0,0,47,0,0,0,63,4,0,0,125,63,0,1,252,63,0,191,240,29,0,191,192,0,0,0,0,0,0,
  // 0x1ef6  Ỷ
  246,30,15,26,104,15,0,0,0,26,128,0,0,31,240,0,0,0,244,0,0,0,244,0,0,7,224,0,0,7,64,0,0,1,0,0,104,0,0,168,126,0,1,248,63,0,3,240,31,128,7,208,15,192,15,192,7,224,47,64,2,240,63,0,0,248,189,0,0,189,252,0,0,63,240,0,0,47,224,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,
  // 0x1ef7  ỷ
  247,30,14,29,116,14,0,249,0,21,0,0,0,127,192,0,0,22,224,0,0,2,224,0,0,11,192,0,0,15,0,0,0,9,0,0,0,0,0,0,252,0,7,224,126,0,15,192,63,0,15,192,47,64,31,64,15,128,63,0,15,192,62,0,7,208,188,0,3,224,252,0,2,240,244,0,0,246,240,0,0,251,224,0,0,127,208,0,0,63,192,0,0,47,128,0,0,47,0,0,0,63,0,0,0,125,0,0,1,252,0,0,191,240,0,0,191,192,0,0,0,0,0,0,
  // 0x1ef8  Ỹ
  248,30,15,25,100,15,0,0,0,0,1,0,0,254,7,64,3,255,255,0,3,66,253,0,1,0,0,0,0,0,0,0,104,0,0,168,126,0,1,248,63,0,3,240,31,128,7,208,15,192,15,192,7,224,47,64,2,240,63,0,0,248,189,0,0,189,252,0,0,63,240,0,0,47,224,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,
  // 0x1ef9  ỹ
  249,30,14,26,104,14,0,249,3,253,14,0,11,255,253,0,14,7,248,0,4,0,0,0,0,0,0,0,252,0,7,224,126,0,15,192,63,0,15,192,47,64,31,64,15,128,63,0,15,192,62,0,7,208,188,0,3,224,252,0,2,240,244,0,0,246,240,0,0,251,224,0,0,127,208,0,0,63,192,0,0,47,128,0,0,47,0,0,0,63,0,0,0,125,0,0,1,252,0,0,191,240,0,0,191,192,0,0,0,0,0,0,
};

#endif // HAS_GRAPHICAL_TFT
