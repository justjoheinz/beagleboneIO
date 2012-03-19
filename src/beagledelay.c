
#include "beagledelay.h"

int delayMicro(useconds_t useconds) {
  return usleep(useconds);
}
