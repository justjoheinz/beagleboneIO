/** @file beaglegpio.h
 */
#ifndef _GPIO_H
#define _GPIO_H

#include "beaglepair.h"
#include "beaglepins.h"

/** a HIGH value for a digital pin. 
 * 
 */
#define HIGH 1

/** a LOW value for a digital pin. 
 * 
 */
#define LOW 0

/** OUTPUT mode for a pin. 
 * 
 */
#define OUTPUT 1

/** INPUT mode for a pin. 
 * 
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
#define _MUX_5 _MUX(5)

#define _MUX_PUPD_DISABLE _MUX_3
#define _MUX_PUPD_PULLUP _MUX_4
#define _MUX_RECEIVER_ENABLE _MUX_5
#define _MUX_SLEW_SLOW _MUX_6

/** Structure to hold information about a pin.
 * 
 */
typedef struct {
  /** name of the pin. */
  char* name;
  /** number of information pairs in the PIN struct */
  int no;
  /** information pairs.
   * These contain information such as the pin name for muxing.
   */
  Pair def[10];
} PIN;


extern PIN pins[];

/** export a pin. */
extern void gpio_export(unsigned);

/** unexport/release a pin. */
extern void gpio_unexport(unsigned);

/** set the direction of the pin.
 * @param pin the pin
 * @param value INPUT or OUTPUT
 */
extern void gpio_set_direction(unsigned pin, unsigned value);

/** write a value to the pin.
 * @param pin the pin
 * @param value HIGH or LOW
 */
extern void gpio_write_value(unsigned pin, unsigned value);

/** read a value from a pin.
 * @param pin the pin
 * @param value the returned value
 */
extern void gpio_read_value(unsigned pin, unsigned *value);

/** set the edge for the pin.
 * @param pin the pin
 * @param edge one of EDGE_NONE, EDGE_FALLING, EDGE_RISING, EDGE_BOTH
 */ 
extern void gpio_set_edge(unsigned, const char *);

/** set active low for the pin.
 * @param pin the pin
 * @param value one of HIGH or LOW
 */
extern void gpio_set_active_low(unsigned pin, unsigned value);

/** get low level file descriptor.
 * It is in the responsibility of the developer to close the FD again.
 * This operations IS NOT STABLE! Do not rely on its interface, behavior or
 * existence.
 * @param pin the pin
 * @param flag the flags used for the open() operation
 * @return the file descriptor
 */
extern int gpio_get_fd(unsigned pin, int flag);

/** close the file descriptor.
 * @param fd the file descriptor
 */
extern void gpio_close_fd(int fd);

/** print some debug stuff about the PIN structure
 *
 */
extern void gpio_inspect(const PIN *pin);

/** mux a pin.
 * You can pass any pin to this operation and the library looks up the name
 * of the pin in the muxing information, to write the new mux value to the
 * right name in the /sys/ filesystem.
 * @param pin the pin to be muxed
 * @param mux the new mux value
 */
extern void gpio_mux(const PIN *, unsigned);

#endif
