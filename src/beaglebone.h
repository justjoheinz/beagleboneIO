#ifndef _BEAGLEBONE_H
#define _BEAGLEBONE_H
#include "gpio.h"
#include <stdlib.h>

void pinMode(const PIN, unsigned);
void digitalWrite(const PIN, unsigned);
unsigned digitalRead(const PIN);

#endif
