#include "beaglepwm.h"
#include <assert.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>

volatile uint32_t *cm_per_regs;

int PWM_OFFSETS[PWM_LIST_MAX] = {
  CM_PER_EPWMSS0_CLKCTRL_OFFSET / sizeof (uint32_t),
  CM_PER_EPWMSS1_CLKCTRL_OFFSET / sizeof (uint32_t),
  CM_PER_EPWMSS2_CLKCTRL_OFFSET / sizeof (uint32_t)
};


static int get_memmap_fd() {
  int dev_mem_fd;

  dev_mem_fd = open ("/dev/mem", O_RDWR | O_SYNC);
  if (dev_mem_fd == -1) {
    perror ("open failed");
    assert(0);
  }
  cm_per_regs = (volatile uint32_t *)mmap (NULL, CM_PER_REG_LENGTH, PROT_READ |PROT_WRITE, MAP_SHARED, dev_mem_fd, CM_PER_REG_START);
  
  if (cm_per_regs == (volatile uint32_t *)MAP_FAILED) {
    perror("mmap failed");
    close(dev_mem_fd);
    assert(0);
  }
  return dev_mem_fd;
}

static void close_memmap_fd(int fd) {
  munmap ((void *)cm_per_regs, CM_PER_REG_LENGTH);
  close (fd);
}

void pwm_enable(unsigned pwmNumber) {
  int fd;

  fd = get_memmap_fd();
  cm_per_regs[PWM_OFFSETS[pwmNumber]] = PWM_CLOCK_DISABLE;
  close_memmap_fd(fd);
}
