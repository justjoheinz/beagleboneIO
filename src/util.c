
#include "beagleutil.h"
#include <stdio.h>

unsigned compute_pin_index(const char* pinStr) {
  unsigned x;
  unsigned y;

  if ((sscanf(pinStr, "P%u_%u", &x, &y)) == 2) {
    if ((x >= 8) && (x<=9) && (y >=1 && y<=46)) {
      return (x-8)*46 + y - 1;
    }
  }
  // invalid conversion or invalid range
  return -1;
}
