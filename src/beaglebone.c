#include "beaglebone.h"

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void pinMode(const PIN pin, unsigned int value) {
  unsigned gpio;
  const Pair* pair;

  pair  = get_pair_with_key(pin.def, pin.no, "gpio");
  gpio = atoi(pair->value);

  if (value == INPUT) {
    gpio_mux(&pin, 0x27);
  }
  else {
    gpio_mux(&pin, 0x7);
  }

  gpio_export(gpio);
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

void shiftOut(const PIN dataPin, const PIN clockPin, unsigned bitOrder, unsigned value) {
  unsigned i;
  unsigned bit;

  for (i = 0; i < 8 ; i++) {
    if (bitOrder == LSBFIRST) {
      bit = value & (1 << i);
    }
    else {
      bit = value & (1 << (7-i));
    }
    digitalWrite(dataPin, bit);
    digitalWrite(clockPin, HIGH);
    digitalWrite(clockPin, LOW); 
  }
}

void run(beaglefunc setup, beaglefunc loop) {
  (*setup)();
  for(;;) {
    (*loop)();
  }
}
