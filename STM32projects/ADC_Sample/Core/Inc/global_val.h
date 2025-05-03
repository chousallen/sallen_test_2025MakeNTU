/*
 * temp_config.h
 *
 *  Created on: May 4, 2025
 *      Author: choua
 */

#ifndef INC_GLOBAL_VAL_H_
#define INC_GLOBAL_VAL_H_

#include <stdint.h>

#define LCD_NUM_POINT  200 // 200 points on the screen
extern uint8_t trigger_level; // 0-255
extern uint8_t offset; // 0-255

typedef enum
{
    TRIGGER_MODE_RISING,
    TRIGGER_MODE_FALLING,
    TRIGGER_MODE_BOTH
} trigger_mode_typedef;

extern trigger_mode_typedef trigger_mode;
extern int32_t time_scale;             // capture 1 data from every n points

#endif /* INC_TEMP_CONFIG_H_ */
