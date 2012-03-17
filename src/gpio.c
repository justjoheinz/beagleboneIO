#include "beaglegpio.h"

#include <assert.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


void gpio_inspect(const PIN *pin) {
  int i = 0;

  printf("Name: %s\n", pin->name);
  printf("\tno; %d\n", pin->no);
  for (i = 0; i < pin->no; i++) {
    printf("\t%s : %s\n",(pin->def[i]).key, (pin->def[i]).value);
  }
}

void gpio_mux(const PIN *pin, unsigned value) {
  FILE *f;
  char buffer[128];
  const Pair *omap_pair;

  if ((omap_pair = get_pair_with_key(pin->def, pin->no, "mux")) == NULL) {
    assert(0);
  }
  sprintf(buffer, "/sys/kernel/debug/omap_mux/%s", omap_pair->value);
  if ((f = fopen(buffer, "w")) == NULL) {
    perror("can't open pin for muxing");
    assert(0);
  }
  fprintf(f, "%x", value);
  fclose(f);
}

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

  snprintf(buf, sizeof(buf), "/sys/class/gpio/gpio%u/direction", gpio);
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
  int fd;

  if ((fd = gpio_get_fd(gpio,O_WRONLY)) != -1) {
    if (value) {
      write(fd, "1", 2);
    }
    else {
      write(fd, "0", 2);
    }
    gpio_close_fd(fd);
    return;
  }
  perror("failed to set value for pin");
  assert(0);
}

void gpio_read_value(unsigned gpio, unsigned *value) {
  FILE *pin;
  char buf[128];

  snprintf(buf, sizeof(buf), "/sys/class/gpio/gpio%u/value", gpio);
  if ((pin = fopen(buf,"r")) != NULL) {
    fscanf(pin, "%u", value);
    fclose(pin);
    return;
  }
  perror("Failed to get value for pin");
  assert(0);
}

void gpio_set_edge(unsigned gpio, const char* edge) {
  FILE *pin;
  char buf[128];
  snprintf(buf, sizeof(buf), "/sys/class/gpio/gpio%u/edge", gpio);
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
  snprintf(buf, sizeof(buf), "/sys/class/gpio/gpio%u/active_low", gpio);
  if ((pin = fopen(buf,"w")) != NULL) {
    fprintf(pin, "%u", value);
    fclose(pin);
    return;
  }
  perror("failed to set active low for pin");
  assert(0);
}


int gpio_get_fd(unsigned gpio, int flag) {
  int fd;
  char buf[128];

  snprintf(buf, sizeof(buf),"/sys/class/gpio/gpio%u/value", gpio);
  fd = open(buf, flag );
  assert(fd != -1);
  return fd;
}

void gpio_close_fd(int fd) {
  close(fd);
}


