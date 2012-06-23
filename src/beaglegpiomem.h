/** @file beaglegpiomem
 * @brief functions and constants for GPIO via memory mapped i/o
  */

#ifndef _GPIO_MEM_H

#include "beaglegpio.h"

#define MMAP_OFFSET 0x44c00000
#define MMAP_SIZE   (0x48ffffff-MMAP_OFFSET)

/** BANK 0
 */
#define GPIO0 (0x44e07000-MMAP_OFFSET)
/** Bank 1
 */
#define GPIO1 (0x4804c000-MMAP_OFFSET)
/** BANK 2
 */
#define GPIO2 (0x481ac000-MMAP_OFFSET)
/** BANK 3
 */
#define GPIO3 (0x481ae000-MMAP_OFFSET)

#define GPIO_OE           0x134
#define GPIO_DATAIN       0x138
#define GPIO_DATAOUT      0x13c
#define GPIO_CLEARDATAOUT 0x190
#define GPIO_SETDATAOUT   0x194

/** write to a pin.
 *
 * @param pin the pin
 * @param value the value
 */
extern void digitalWrite(const PIN pin, unsigned int value);
extern void digitalWrite_mem(PIN, unsigned int);

/** setup gpiomem module.
 * if gpiomem is enabled, this function is automatically called in the setup
 * procedure.
 */
extern int setup_gpio_mem_map();

#endif // _GPIO_MEM_H
