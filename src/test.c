#include <unistd.h>
#include "gpio.h"

int main() {
  unsigned pin = GPIO(1,6);
  gpio_export(pin);
  gpio_set_direction(pin, OUTPUT);
  for (;;) {
    gpio_set_value(pin, HIGH);
    sleep(1);
    gpio_set_value(pin, LOW);
    sleep(1);
  }
}
