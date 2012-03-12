//
// contributed by: Dustin Mitchell <dmmitchel@gmail.com
// see: https://groups.google.com/forum/?fromgroups#!topic/beagleboard/alKf67dwMHI
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdint.h>
#include <sys/mman.h>
#include <unistd.h>

#define CM_PER_REG_START 0x44e00000
#define CM_PER_REG_LENGTH 1024
#define CM_PER_EPWMSS0_CLKCTRL_OFFSET 0xd4
#define CM_PER_EPWMSS1_CLKCTRL_OFFSET 0xcc
#define CM_PER_EPWMSS2_CLKCTRL_OFFSET 0xd8

#define PWM_CLOCK_ENABLE 0x2
#define PWM_CLOCK_DISABLE 0x0

#define PWM_LIST_MAX 3

int PWM_OFFSETS[PWM_LIST_MAX] = {
  CM_PER_EPWMSS0_CLKCTRL_OFFSET / sizeof (uint32_t),
  CM_PER_EPWMSS1_CLKCTRL_OFFSET / sizeof (uint32_t),
  CM_PER_EPWMSS2_CLKCTRL_OFFSET / sizeof (uint32_t)
};

void print_usage (const char *message)
{
  if (message)
    printf ("%s\n", message);

  printf ("pwm_clock <-e | -d> <PWM [PWM]>\n\n");
}

int main (int argc, char **argv)
{
  int i;
  int *cur_list = NULL;
  int *cur_list_index = NULL;
  int enable_list[PWM_LIST_MAX];
  int enable_list_index = 0;
  int disable_list[PWM_LIST_MAX];
  int disable_list_index = 0;
  int dev_mem_fd;
  volatile uint32_t *cm_per_regs;

  for (i = 0; i < PWM_LIST_MAX; ++i) {
    enable_list[i] = -1;
    disable_list[i] = -1;
  }

  for (i = 1; i < argc; ++i) {
    if (strncmp (argv[i], "-e", 2) == 0) {
      cur_list = enable_list;
      cur_list_index = &enable_list_index;
    }
    else if (strncmp (argv[i], "-d", 2) == 0) {
      cur_list = disable_list;
      cur_list_index = &disable_list_index;
    }
    else {
      if (!cur_list) {
        print_usage (0);
        return 1;
      }

      if (*cur_list_index >= PWM_LIST_MAX) {
        print_usage ("Too many PWM's specified for an option");
        return 1;
      }

      cur_list[*cur_list_index] = atoi (argv[i]);
      ++*cur_list_index;
    }
  }

  dev_mem_fd = open ("/dev/mem", O_RDWR);
  if (dev_mem_fd == -1) {
    perror ("open failed");
    return 1;
  }

  cm_per_regs = (volatile uint32_t *)mmap (NULL, CM_PER_REG_LENGTH,
					   PROT_READ | PROT_WRITE, MAP_SHARED, dev_mem_fd, CM_PER_REG_START);
  if (cm_per_regs == (volatile uint32_t *)MAP_FAILED) {
    perror ("mmap failed");
    close (dev_mem_fd);
    return 1;
  }

  for (i = 0; i < PWM_LIST_MAX && enable_list[i] != -1; ++i) {
    if (enable_list[i] < 0 || enable_list[i] >= PWM_LIST_MAX) {
      printf ("Invalid PWM specified, %d\n", enable_list[i]);
      goto out;
    }

    printf ("Enabling PWM %d\n", enable_list[i]);
    cm_per_regs[PWM_OFFSETS[enable_list[i]]] = PWM_CLOCK_ENABLE;
  }

  for (i = 0; i < PWM_LIST_MAX && disable_list[i] != -1; ++i) {
    if (disable_list[i] < 0 || disable_list[i] >= PWM_LIST_MAX) {
      printf ("Invalid PWM specified, %d\n", disable_list[i]);
      goto out;
    }

    printf ("Disabling PWM %d\n", disable_list[i]);
    cm_per_regs[PWM_OFFSETS[disable_list[i]]] = PWM_CLOCK_DISABLE;
  }

 out:
  munmap ((void *)cm_per_regs, CM_PER_REG_LENGTH);
  close (dev_mem_fd);

  return 0;
}
