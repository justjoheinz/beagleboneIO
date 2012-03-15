## Makefile.am -- Process this file with automake to produce Makefile.in
bin_PROGRAMS = pwm_clock digitalWrite analogRead

digitalWrite_SOURCES = digitalWrite.c util.c
digitalWrite_LDADD = libbeagleboneio.la

analogRead_Sources = analogRead.c util.c
analogRead_LDADD = libbeagleboneio.la

pwm_clock_SOURCES = pwm_clock.c

lib_LTLIBRARIES = libbeagleboneio.la
libbeagleboneio_la_SOURCES = beaglebone.c gpio.c pair.c gpio.h pair.h pins.c pins.h
include_HEADERS = beaglebone.h