/* Copyright (c) 2017 pcbreflux. All Rights Reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>. *
 */
#ifndef SMART_LED_H_
#define SMART_LED_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct colorRGBB  {
    uint8_t red, green, blue, brightness;
} colorRGBB;

void set_smart_led(uint8_t red, uint8_t green, uint8_t blue, uint8_t brightness);

#ifdef __cplusplus
}
#endif


#endif /* SMART_LED_H_ */
