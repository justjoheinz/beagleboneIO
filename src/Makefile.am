## Makefile.am -- Process this file with automake to produce Makefile.in
bin_PROGRAMS = testgpio testreadpin
testgpio_SOURCES = test.c
testgpio_LDADD = libbeaglebonegpio.la

testreadpin_SOURCES = readpin.c
testreadpin_LDADD = libbeaglebonegpio.la

lib_LTLIBRARIES = libbeaglebonegpio.la
libbeaglebonegpio_la_SOURCES = gpio.c pair.c