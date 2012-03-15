

#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>

#include "beagleutil.h"
#include "beaglebone.h"

static const struct option longOpts[] = {
  { "pin", required_argument, NULL, 'p' },
  { "help", no_argument, NULL, 'h'},
  { NULL, no_argument, NULL, 0}
};

static const char *optString = "p:h";

static char* pinStr;

static int pinIndex = -1;
static int helpDisplayed = 0;

void display_usage() {
  printf("analogRead --pin <pin>\n");
  printf("\t<pin>\t an analog pin number, Arduino style, e.g. 0, 1, ...\n");
  printf("\t\tmaps to the according AIN pin of the beaglebone.\n");
  printf("\t\tthe value is written to stdoutn");
  printf("\n");
}


void doAnalogRead(unsigned pin) {
  unsigned value = analogRead(pin);
  printf("%u\n", value);
}


int main(int argc, char **argv) {
  int opt;
  while ((opt = getopt_long(argc, argv, optString, longOpts, NULL)) != -1) {
    switch(opt) {
    case 'p':
      pinStr = optarg;
      sscanf(pinStr, "%u", &pinIndex);
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
  if (pinIndex >= 0 && pinIndex <= 7) {
    doAnalogRead(pinIndex);
  }
  else {
    display_usage();
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}

