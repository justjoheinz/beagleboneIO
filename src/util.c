

#include <stdio.h>

unsigned compute_pin_index(const char* pinStr) {
  unsigned result;
  unsigned x;
  unsigned y;

  if ((sscanf(pinStr, "P%u_%u", &x, &y)) == 2) {
    if ((x >= 8) && (x<=9) && (y >=1 && y<=46)) {
      return (x-8)*45 + y;
    }
  }
  // invalid conversion or invalid range
  return -1;
}
