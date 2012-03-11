#ifndef _GPIO_H
#define _GPIO_H

#include <assert.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


#define HIGH 1
#define LOW 0
#define OUTPUT 1
#define INPUT 0

#define EDGE_NONE    "none"
#define EDGE_RISING  "rising"
#define EDGE_FALLING "falling"
#define EDGE_BOTH    "both"

#define GPIO(X,Y) (X*32 + Y)

typedef struct {
  char* name;
  unsigned gpio;
  char* mux;
  unsigned eeprom;
} PIN;

extern void gpio_export(unsigned);

extern void gpio_unexport(unsigned);

extern void gpio_set_direction(unsigned, unsigned);

extern void gpio_write_value(unsigned, unsigned);

extern void gpio_read_value(unsigned, unsigned *);

extern void gpio_set_edge(unsigned, char *);

extern void gpio_set_active_low(unsigned, unsigned);

int gpio_get_filedescriptor(unsigned);

void gpio_close_filedescriptor(int);

#endif
