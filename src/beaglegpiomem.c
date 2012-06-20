#ifdef FEATURE_GPIO_MEM


#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <assert.h>
#include <fcntl.h>
#include <sys/mman.h>

#include "beaglepair.h"
#include "beaglegpiomem.h"

unsigned long bankAddr[] = {
  GPIO0,
  GPIO1,
  GPIO2,
  GPIO3
};

volatile unsigned long *gpio;

unsigned long setBit(unsigned long reg, unsigned long mask) {
  return reg | mask;
} 

unsigned long clearBit(unsigned long reg, unsigned long mask) {
  return reg & (~mask);
} 

void setReg(unsigned long address, unsigned long reg) {
   gpio[address/4] = reg;
   // if (DEBUG)  printf("Writting       %lx to %lx\n", address,reg);
}

unsigned long getReg(unsigned long address) {
  unsigned long result = 0;

  /*
  if (DEBUG) {
    printf("Reading Reg at %lx\n", address);
  }
  */
  result = gpio[address/4];
  /*
  if (DEBUG) {
    printf("               %lx is %lx\n", address,result);
  }
  */
  return result;
}

void pinToMem(PIN pin, unsigned long *ret_addr, unsigned long *ret_bitMask) {
    assert(gpio != MAP_FAILED);
    const Pair* pair = get_pair_with_key(pin.def, pin.no, "gpio");
    unsigned gpioNo = atoi(pair->value);
    unsigned bank = gpioNo / 32;
    unsigned bit = gpioNo % 32;
    /*
    if (DEBUG) printf("Set Pin %s\n in bank %d and bit %d\n",
        pin.name,bank,bit);
    */
    assert(bank >= 0);
    assert(bank < 4);
    *ret_bitMask = 1 << bit;
    *ret_addr = bankAddr[bank];
}

void digitalWrite(PIN pin, unsigned int value) {
    unsigned long addr;
    unsigned long bitMask;

    pinToMem(pin, &addr, &bitMask);
      
    unsigned long reg = getReg(addr + GPIO_DATAOUT);
    if (value)
      reg = setBit(reg, bitMask);
    else 
      reg = clearBit(reg, bitMask);
    setReg(addr + GPIO_DATAOUT,reg);
}

unsigned digitalRead(PIN pin) {
    unsigned long addr;
    unsigned long bitMask;

    pinToMem(pin, &addr, &bitMask);
    unsigned long reg = getReg(addr + GPIO_DATAIN);
    return (reg & bitMask) ? 1 : 0;
}

int setup_gpio_mem_map() {
    // if (DEBUG) printf ("open file descriptor for GPIO\n");
    int gpio_fd = open("/dev/mem", O_RDWR | O_SYNC);
    if (gpio_fd < 0) {
      printf("Could not open GPIO memory fd\n");
      exit(0);
    }

    // GPIO configuration
    // if (DEBUG) printf ("Map GPIO\n");
    gpio = (unsigned long*) mmap(NULL, MMAP_SIZE, PROT_READ | PROT_WRITE,
MAP_SHARED, gpio_fd, MMAP_OFFSET);
    if (gpio == MAP_FAILED) {
      printf ("GPIO Mapping failed\n");
      close(gpio_fd);
      exit(0);
    }
    return 1;
}

#endif
