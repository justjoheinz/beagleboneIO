## Makefile.am -- Process this file with automake to produce Makefile.in
bin_PROGRAMS = pwm_clock digitalWrite analogRead

digitalWrite_SOURCES = digitalWrite.c util.c beagleutil.h
digitalWrite_LDADD = libbeagleboneio.la

analogRead_Sources = analogRead.c util.c beagleutil.h
analogRead_LDADD = libbeagleboneio.la

pwm_clock_SOURCES = pwm_clock.c

lib_LTLIBRARIES = libbeagleboneio.la
libbeagleboneio_la_SOURCES = beaglebone.c gpio.c pair.c  beaglepins.c
include_HEADERS = beaglebone.h beaglepins.h beaglegpio.h beaglepair.h