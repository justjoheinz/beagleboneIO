/** @file beagleuart
  * @brief serial communication with tty devices
  */
#ifndef _BEAGLEUART_H
#define _BEAGLEUART_H

#include "beaglegpio.h"
#include <termios.h>


typedef struct {
  const char* device;
  const PIN* rxd;
  const PIN* txd;
  unsigned rxd_mux;
  unsigned txd_mux;
  int fd;
  struct termios toptions;
} UART;

extern UART uart[6];

/**
 *
 */
extern int uart_begin(UART uart, int baud);
  
/**
 *
 */
extern int uart_write(UART uart, const char* text);

extern int uart_close(UART uart);
	     
#endif /* _BEAGLEUART_H */
