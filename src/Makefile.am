## Makefile.am -- Process this file with automake to produce Makefile.in
bin_PROGRAMS = testgpio testreadpin pwm_clock

testgpio_SOURCES = test.c
testgpio_LDADD = libbeaglebonegpio.la

testreadpin_SOURCES = readpin.c
testreadpin_LDADD = libbeaglebonegpio.la

pwm_clock_SOURCES = pwm_clock.c

lib_LTLIBRARIES = libbeaglebonegpio.la
libbeaglebonegpio_la_SOURCES = beaglebone.c gpio.c pair.c gpio.h pair.h
include_HEADERS = beaglebone.h