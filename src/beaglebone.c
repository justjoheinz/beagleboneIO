#include "beaglebone.h"

void pinMode(const PIN pin, unsigned int value) {
  unsigned gpio;
  const Pair* pair;

  pair  = get_pair_with_key(pin.def, pin.no, "gpio");
  gpio = atoi(pair->value);
  gpio_export(gpio);
  if (value == INPUT) {
    gpio_mux(&pin, 0x27);
  }
  else {
    gpio_mux(&pin, 0x7);
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

unsigned analogRead(const unsigned pin) {
  FILE *f;
  char buf[128];
    unsigned value;
    snprintf(buf, sizeof(buf), "/sys/bus/platform/devices/tsc/ain%u", (pin + 1));
  if ((f = fopen(buf, "r")) != NULL) {
    fscanf(f, "%u", &value);
    fclose(f);
    return value;
  }
  perror("Cannot access analog pin");
  assert(0);
}
  
