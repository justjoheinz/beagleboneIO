#include "gpio.h"

void gpio_export(unsigned gpio) {
  FILE *pin;

  if ( (pin  = fopen("/sys/class/gpio/export","w")) != NULL) {
    fprintf(pin, "%u", gpio);
    fclose(pin);
    return;
  }
  perror("failed to export pin");
  assert(0);
}

void gpio_unexport(unsigned gpio) {
  FILE *pin;
  if ( (pin  = fopen("/sys/class/gpio/unexport","w")) != NULL) {
    fprintf(pin, "%u", gpio);
    fclose(pin);
    return;
  }
  perror("failed to unexport pin");
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
  perror("Failed to set direction for pin");
  assert(0);
}

void gpio_write_value(unsigned gpio, unsigned value) {
  FILE *pin;
  char buf[128];
  sprintf(buf, "/sys/class/gpio/gpio%u/value", gpio);
  if ((pin = fopen(buf,"w")) != NULL) {
    fprintf(pin, "%u", value);
    fclose(pin);
    return;
  }
  perror("failed to set value for pin");
  assert(0);
}

void gpio_read_value(unsigned gpio, unsigned *value) {
  FILE *pin;
  char buf[128];

  sprintf(buf, "/sys/class/gpio/gpio%u/value", gpio);
  if ((pin = fopen(buf,"r")) != NULL) {
    fscanf(pin, "%u", value);
    fclose(pin);
    return;
  }
  perror("Failed to get value for pin");
  assert(0);
}

void gpio_set_edge(unsigned gpio, char* edge) {
  FILE *pin;
  char buf[128];
  sprintf(buf, "/sys/class/gpio/gpio%u/edge", gpio);
  if ((pin = fopen(buf,"w")) != NULL) {
    fprintf(pin, "%s", edge);
    fclose(pin);
    return;
  }
  perror("failed to set edge");
  assert(0);
}

void gpio_set_active_low(unsigned gpio, unsigned value) {
  FILE *pin;
  char buf[128];

  assert(value == HIGH || value == LOW);
  sprintf(buf, "/sys/class/gpio/gpio%u/active_low", gpio);
  if ((pin = fopen(buf,"w")) != NULL) {
    fprintf(pin, "%u", value);
    fclose(pin);
    return;
  }
  perror("failed to set active low for pin");
  assert(0);
}


int gpio_get_filedescriptor(unsigned gpio) {
  int fd;
  char buf[128];

  sprintf(buf, "/sys/class/gpio/gpio%u/value", gpio);
  fd = open(buf, O_RDONLY | O_NONBLOCK );
  assert(fd != -1);
  return fd;
}

void gpio_close_filedescriptor(int fd) {
  close(fd);
}
