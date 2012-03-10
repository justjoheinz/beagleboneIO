#include <unistd.h>
#include "gpio.h"

int main() {
  gpio_export(GPIO(1,6));
  gpio_set_direction(OUTPUT);
  for (;;) {
    gpio_set_value(HIGH);
    sleep(1);
    gpio_set_value(LOW);
    sleep(1);
  }
}
