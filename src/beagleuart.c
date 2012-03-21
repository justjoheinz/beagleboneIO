#include "beagleuart.h"
#include "beaglepins.h"
#include "beaglegpio.h"

#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

// some of the code inspired by http://todbot.com/

UART uart[6] = {
  // device | rxd | txd | rxd_mux | txd_mux | fd | toptions
  { "/dev/ttyO0", NULL, NULL, 0, 0, -1},
  { "/dev/ttyO1", &pins[P9_26], &pins[P9_24], 0, 0, -1},
  { "/dev/ttyO2", &pins[P9_22], &pins[P9_21], 0, 0, -1},
  { "/dev/ttyO3", NULL, NULL, 0, 0, -1},
  { "/dev/ttyO4", &pins[P9_11], &pins[P9_14], 0, 0, -1},
  { "/dev/ttyO6", &pins[P9_38], &pins[P9_37], 0, 0, -1}};


int uart_begin(UART uart, int baud) {

  // config pins 
  gpio_mux(&uart.rxd, &uart.rxd_mux);
  gpio_mux(&uart.txd, &uart.txd_mux);    

  uart.fd = open(uart.device, O_RDWR | O_NOCTTY | O_NDELAY);
  if (uart.fd == -1)  {
    perror("uart_begin: unable to open tty_device ");
    return -1;
  }
    
  if (tcgetattr(uart.fd, &uart.toptions) < 0) {
    perror("uart_begin: couldn't retrieve term attributes");
    return -1;
  }
  speed_t brate = baud; 

  switch(baud) {
  case 4800:   brate=B4800;   break;
  case 9600:   brate=B9600;   break;
  case 14400:  brate=B14400;  break;
  case 19200:  brate=B19200;  break;
  case 28800:  brate=B28800;  break;
  case 38400:  brate=B38400;  break;
  case 57600:  brate=B57600;  break;
  case 115200: brate=B115200; break;
  }
  cfsetispeed(&uart.toptions, brate);
  cfsetospeed(&uart.toptions, brate);
}

int uart_close(UART uart) {
  return close(uart.fd);
}
