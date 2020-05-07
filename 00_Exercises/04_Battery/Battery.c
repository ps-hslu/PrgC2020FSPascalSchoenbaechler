/*
 * Battery.c
 *
 *  Created on: May 7, 2020
 *      Author: pascal
 */

#include "Battery.h"

void batteryStatusChange(char batteryStatus)
{
    switch(batteryStatus)
    {
    case zero:
        LCDM12 = 0x10;
        LCDM13 = 0x01;

        break;

    case one:
        LCDM12 = 0x10;
        LCDM13 = 0x03;

        break;

    case two:
        LCDM12 = 0x30;
        LCDM13 = 0x03;

        break;

    case three:
        LCDM12 = 0x30;
        LCDM13 = 0x07;

        break;

    case four:
        LCDM12 = 0x70;
        LCDM13 = 0x07;

        break;

    case five:
        LCDM12 = 0x70;
        LCDM13 = 0x0F;

        break;

    case six:
        LCDM12 = 0xF0;
        LCDM13 = 0x0F;

        break;
    }
}
