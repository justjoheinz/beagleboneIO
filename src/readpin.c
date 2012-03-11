#include <stdio.h>
#include "gpio.h"
#include "pins.h"

int main() {
  unsigned pin = GPIO(1,7);
  unsigned value = LOW;
  int i;
 
  gpio_inspect(&pins[P8_3]);
  gpio_mux(&pins[P8_3], "mux");

  gpio_export(pin);
  gpio_set_direction(pin, INPUT);
  for (;; i++) {
    if ((i % 1000) == 0) {
      printf(".");
      fflush(stdout);
      i = 0;
    }
    gpio_read_value(pin, &value);
    if (value == HIGH) {
      printf("Pin %u is high\n", pin);
    }
  }
}
