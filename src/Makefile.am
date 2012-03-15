## Makefile.am -- Process this file with automake to produce Makefile.in
bin_PROGRAMS = testgpio testreadpin pwm_clock digitalWrite

testgpio_SOURCES = test.c
testgpio_LDADD = libbeagleboneio.la

testreadpin_SOURCES = readpin.c
testreadpin_LDADD = libbeagleboneio.la

digitalWrite_SOURCES = digitalWrite.c util.c
digitalWrite_LDADD = libbeagleboneio.la

pwm_clock_SOURCES = pwm_clock.c

lib_LTLIBRARIES = libbeagleboneio.la
libbeagleboneio_la_SOURCES = beaglebone.c gpio.c pair.c gpio.h pair.h pins.c pins.h
include_HEADERS = beaglebone.h