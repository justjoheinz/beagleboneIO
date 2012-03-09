#include<assert.h>
#include<stdio.h>
#include "gpio.h"

void gpio_export(unsigned gpio) {
  FILE *pin;
  if ( (pin  = fopen("/sys/class/gpio/export","w")) != NULL) {
    fprintf(pin, "%u", gpio);
    fclose(pin);
    return;
  }
  assert(0);
}

void gpio_unexport(unsigned gpio) {
  FILE *pin;
  if ( (pin  = fopen("/sys/class/gpio/unexport","w")) != NULL) {
    fprintf(pin, "%u", gpio);
    fclose(pin);
    return;
  }
  assert(0);
}

void gpio_set_direction(unsigned gpio, unsigned direction) {
  FILE *pin;
  char buf[128];
  sprintf(buf, "/sys/class/gpio/gpio%u/direction", gpio);
  if ((pin = fopen(buf, "w")) != NULL) {
    switch (direction) {
    case INPUT: fprintf(pin, "in");
      break;
    case OUTPUT: fprintf(pin, "out");
      break;
    default:
      assert(0);
    }
    fclose(pin);
    return;
  }
  assert(0);
}

void gpio_set_value(unsigned gpio, unsigned value) {
  FILE *pin;
  char buf[128];
  sprintf(buf, "/sys/class/gpio/gpio%u/value", gpio);
  if ((pin = fopen(buf,"w")) != NULL) {
    fprintf(pin, "%u", value);
    fclose(pin);
    return;
  }
  assert(0);
}


