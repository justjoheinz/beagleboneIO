#ifndef _GPIO_H
#define _GPIO_H

#define HIGH 1
#define LOW 0
#define OUTPUT 1
#define INPUT 0

#define EDGE_NONE    "none"
#define EDGE_RISNIG  "rising"
#define EDGE_FALLING "falling"
#define EDGE_BOTH    "both"

#define GPIO(X,Y) (X*32 + Y)

typedef struct {
  char* name;
  unsigned gpio;
  char* mux;
  unsigned eeprom;
} PIN;

#endif
