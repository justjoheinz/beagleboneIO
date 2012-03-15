/** @file gpio.h
 */
#ifndef _GPIO_H
#define _GPIO_H

#include "beaglepair.h"
#include "beaglepins.h"

/** a HIGH value for a digital pin. 
 * @ingroup pin_values
 */
#define HIGH 1

/** a LOW value for a digital pin. 
 * @ingroup pin_values
 */
#define LOW 0

/** OUTPUT mode for a pin. 
 * @ingoup pin_values
 */
#define OUTPUT 1

/** INPUT mode for a pin. 
 * @ingroup pin_values
 */
#define INPUT 0

#define EDGE_NONE    "none"
#define EDGE_RISING  "rising"
#define EDGE_FALLING "falling"
#define EDGE_BOTH    "both"

/** calculate the correct number based on the X and Y.
 *
 */
#define GPIO(X,Y) (X*32 + Y)

#define _MUX(X) (1<<X)
#define _MUX_0 _MUX(0)
#define _MUX_1 _MUX(1)
#define _MUX_2 _MUX(2)
#define _MUX_3 _MUX(3)
#define _MUX_4 _MUX(4)
#define _MUX_6 _MUX(5)

#define _MUX_PUPD_DISABLE _MUX_3
#define _MUX_PUPD_PULLUP _MUX_4
#define _MUX_RECEIVER_ENABLE _MUX_5
#define _MUX_SLEW_SLOW _MUX_6


typedef struct {
  char* name;
  int no;
  Pair def[10];
} PIN;


extern PIN pins[];

extern void gpio_export(unsigned);

extern void gpio_unexport(unsigned);

extern void gpio_set_direction(unsigned, unsigned);

extern void gpio_write_value(unsigned, unsigned);

extern void gpio_read_value(unsigned, unsigned *);

extern void gpio_set_edge(unsigned, const char *);

extern void gpio_set_active_low(unsigned, unsigned);

extern int gpio_get_filedescriptor(unsigned);

extern void gpio_close_filedescriptor(int);

extern void gpio_inspect(const PIN *);

extern void gpio_mux(const PIN *, unsigned);

#endif
