/*
 * blinky.c
 *
 *  Created on: Feb 21, 2023
 *      Author: irmus
 */


#include "tx_api.h"
#include "main.h"
#include "blinky.h"

void Blinky_Entry(ULONG thread_input)
{
    unsigned int tick;

    while(1)
    {
        // LED toggle
        HAL_GPIO_TogglePin(LD3_GPIO_Port, LD3_Pin);

        // 500ms delay
        tick = tx_time_get();
        while(tx_time_get() - tick < 50);
    }
}
