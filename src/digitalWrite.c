

#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>

#include "beagleutil.h"
#include "beaglebone.h"

static const struct option longOpts[] = {
  { "pin", required_argument, NULL, 'p' },
  { "value", required_argument, NULL, 'v' },
  { "help", no_argument, NULL, 'h'},
  { NULL, no_argument, NULL, 0}
};

static const char *optString = "p:v:h";

static char* pinStr;
static char* valueStr;

static int pinIndex = -1;
static int value = -1;
static int helpDisplayed = 0;

void display_usage() {
  printf("digitalWrite --pin <pin> --value <value>\n");
  printf("\t<pin>\te.g. P8_45\n");
  printf("\t<value>\t0 = LOW, 1 = HIGH\n");
  printf("\n");
}


void doDigitalWrite(unsigned pinIndex, unsigned value) {
  PIN pin;

  pin = pins[pinIndex];
  pinMode(pin, OUTPUT);
  digitalWrite(pin, value);
}


int main(int argc, char **argv) {
#ifdef FEATURE_GPIO_MEM
  setup_gpio_mem_map();
#endif
  int opt;
  while ((opt = getopt_long(argc, argv, optString, longOpts, NULL)) != -1) {
    switch(opt) {
    case 'p':
      pinStr = optarg;
      pinIndex = compute_pin_index(pinStr);
      break;
    case 'v':
      valueStr = optarg;
      sscanf(valueStr, "%u", &value);
      break;
    case 'h':
    case '?':
	display_usage();
        helpDisplayed = 1;
	return EXIT_SUCCESS;
      break;
    default:
      break;
    }
  }
  if (pinIndex != -1 && value != -1) {
    doDigitalWrite(pinIndex, value);
  }
  else {
    display_usage();
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}

