## Makefile.am -- Process this file with automake to produce Makefile.in

# add some endings to CLEANFILES
CLEANFILES = *~

bin_PROGRAMS = pwm_clock digitalWrite analogRead pinMux

digitalWrite_SOURCES = digitalWrite.c util.c beagleutil.h
digitalWrite_LDADD = libbeagleboneio.la

analogRead_SOURCES = analogRead.c util.c beagleutil.h
analogRead_LDADD = libbeagleboneio.la

pinMux_SOURCES = pinMux.c util.c beagleutil.h
pinMux_LDADD = libbeagleboneio.la

pwm_clock_SOURCES = pwm_clock.c

lib_LTLIBRARIES = libbeagleboneio.la
libbeagleboneio_la_SOURCES = beaglebone.c gpio.c pair.c  beaglepins.c beagledelay.c
include_HEADERS = beaglebone.h beaglepins.h beaglegpio.h beaglepair.h beagledelay.h