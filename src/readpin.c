#include <stdio.h>
#include "gpio.h"

int main() {
  unsigned pin = GPIO(1,7);
  unsigned value = LOW;
  gpio_export(pin);
  gpio_set_direction(pin, INPUT);
  for (;;) {
    gpio_read_value(pin, &value);
    if (value == HIGH) {
      printf("Pin %u is high\n", pin);
    }
  }
}