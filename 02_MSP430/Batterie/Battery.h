/*
 * Battery.h
 *
 *  Created on: May 7, 2020
 *      Author: pascal
 */
#include "driverlib.h"

#ifndef BATTERY_H_
#define BATTERY_H_

//Battery Status
#define zero    0
#define one     1
#define two     2
#define three   3
#define four    4
#define five    5
#define six     6

void batteryStatusChange(char batteryStatus);

#endif /* BATTERY_H_ */
