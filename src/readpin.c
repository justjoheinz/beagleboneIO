#include <stdio.h>
#include "gpio.h"
#include "pins.h"

int main() {
  unsigned pin = GPIO(1,2);
  unsigned value = LOW;
  int i;
  PIN configPin;

  configPin = pins[P8_5];
 
  gpio_inspect(&configPin);
  gpio_mux(&configPin, "27");
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
