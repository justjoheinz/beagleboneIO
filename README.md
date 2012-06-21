Beaglebone I/O
==============

A small library to support working with input and output pins on the beaglebone (http://www.beagleboard.org/bone).
It comes together slowly and is largely not tested yet.
It is an experimatel project for
   * understanding the beaglebone hardware
   * setting up C projects with autoconf
   * writing the build system

In the end it shall be fairly highlevel and mimic the behaviour of the Arduino Language and bonescript, the node.js implementation of the beaglebone.

The API is far from stable!

INSTALLATION
------------

Clone the repository (or if you want to contribute fork the repository first and clone your own):

    BONE:~/projects# git clone git://github.com/justjoheinz/beagleboneIO.git
Cloning into beagleboneIO...

cd into the beagleboneIO directory and invoke configure. Use a prefix where to install the binaries and libraries. 

    BONE:~/projects# cd beagleboneIO/
    BONE:~/projects/beagleboneIO# ./configure --prefix=/opt/local
    checking for a BSD-compatible install... /usr/bin/install -c
    checking whether build environment is sane... yes
    checking for a thread-safe mkdir -p... /bin/mkdir -p
    checking for gawk... gawk
    ...

As an alternative one can use MMAP enabled GPIO pins using

    BONE:~/projects/beagleboneIO# ./configure --prefix=/opt/local -enable-gpiomem=yes

(PLEASE NOTE: this feature is not working yet and yields in compile errors)

Compile the sourcecode

    BONE:~/projects/beagleboneIO# make

As root:

    BONE:~/projects/beagleboneIO# make install

Set 2 environment variables to include the path to executables and shared libries, resulting in something like this:

    BONE:~/projects/beagleboneIO# echo $LD_LIBRARY_PATH 
    /opt/local/lib:
    BONE:~/projects/beagleboneIO# echo $PATH
    /home/root/bin:/usr/local/bin:/usr/bin:/bin:/usr/local/sbin:/usr/sbin:/sbin:/opt/local/bin

There are two little helper programms available:

    BONE:~/projects/beagleboneIO# digitalWrite --help
    digitalWrite --pin <pin> --value <value>
        <pin>   e.g. P8_45
        <value> 0 = LOW, 1 = HIGH

    BONE:~/projects/beagleboneIO# digitalWrite --pin P8_4 --value 1
    BONE:~/projects/beagleboneIO# digitalWrite --pin P8_4 --value 0

and

    BONE:~/projects/beagleboneIO# analogRead --help
    analogRead --pin <pin>
        <pin>   an analog pin number, Arduino style, e.g. 0, 1, ...
                maps to the according AIN pin of the beaglebone.
                the value is written to stdoutn
    BONE:~/projects/beagleboneIO# analogRead --pin 4
    4080

SAMPLE PROJECT
--------------

A super simple use of the library:
https://gist.github.com/2059197

In order to write your own programms, currently inspect beaglebone.h and have a look at the source files for analogRead and digitalWrite. The whole API is subject to change though.
Please CONTRIBUTE by submitting feature request and bugs and code.
Hack on!


TODO
----

Stuff to do urgently:

* add PWM support (partly done, see pwm_clock)
* try it out
* reorganize the project structure
* I2C support
* testing and bug reporting
* functions inspired by http://arduino.cc/en/Reference/HomePage
* a delay function other than sleep
* support for Serial communication using /dev/ttyOx / /dev/cuXXX? (started)
      

