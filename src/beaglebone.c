#include "beaglebone.h"

void pinMode(const PIN pin, unsigned int value) {
  unsigned gpio;
  const Pair* pair;

  pair  = get_pair_with_key(pin.def, pin.no, "gpio");
  gpio = atoi(pair->value);
  gpio_export(gpio);
  if (value == INPUT) {
    gpio_mux(&pin, "27");
  }
  else {
    gpio_mux(&pin, "7");
  }
  gpio_set_direction(gpio, value);

}

void digitalWrite(const PIN pin, unsigned int value) {
  unsigned gpio;
  const Pair* pair;
  
  pair = get_pair_with_key(pin.def, pin.no, "gpio");
  gpio = atoi(pair->value);
  gpio_write_value(gpio, value);

} 

unsigned digitalRead(const PIN pin) {
  unsigned gpio;
  const Pair* pair;
  unsigned value;

  pair = get_pair_with_key(pin.def, pin.no, "gpio");
  gpio = atoi(pair->value);
  
  gpio_read_value(gpio, &value);

  return value;
}
