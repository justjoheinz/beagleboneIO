/** @file beaglepins.h
  * @brief Definition of the beaglebone pins.
  *
  * This file contains the defintions of beaglebone pins.
  * The pins are stored in an array structure pins which can be passed
  * to function within the beagleboneio library.
  * Each Pin is addressed via its defined macro name, e.g. P8_3.
  * Information for each pin contains the muxing name, so that
  * pins can be assigned new functions depending on their mode settings.
  *
  *
  * AUTOMATICALLY GENERATED - PLEASE DO NOT MODIFY
  */
#ifndef _PINS_H
#define _PINS_H

/** @brief P8_1
  * DGND
  * 
  */
#define P8_1 0
 
/** @brief P8_2
  * DGND
  * 
  */
#define P8_2 1
 
/** @brief P8_3
  * GPIO1_6
  * "gpio", "38", "mux", "gpmc_ad6", "eeprom", "26"
  */
#define P8_3 2
 
/** @brief P8_4
  * GPIO1_7
  * "gpio", "39", "mux", "gpmc_ad7", "eeprom", "27"
  */
#define P8_4 3
 
/** @brief P8_5
  * GPIO1_2
  * "gpio", "34", "mux", "gpmc_ad2", "eeprom", "22"
  */
#define P8_5 4
 
/** @brief P8_6
  * GPIO1_3
  * "gpio", "35", "mux", "gpmc_ad3", "eeprom", "23"
  */
#define P8_6 5
 
/** @brief P8_7
  * TIMER4
  * "gpio", "66", "mux", "gpmc_advn_ale", "eeprom", "41"
  */
#define P8_7 6
 
/** @brief P8_8
  * TIMER7
  * "gpio", "67", "mux", "gpmc_oen_ren", "eeprom", "44"
  */
#define P8_8 7
 
/** @brief P8_9
  * TIMER5
  * "gpio", "69", "mux", "gpmc_ben0_cle", "eeprom", "42"
  */
#define P8_9 8
 
/** @brief P8_10
  * TIMER6
  * "gpio", "68", "mux", "gpmc_wen", "eeprom", "43"
  */
#define P8_10 9
 
/** @brief P8_11
  * GPIO1_13
  * "gpio", "45", "mux", "gpmc_ad13", "eeprom", "29"
  */
#define P8_11 10
 
/** @brief P8_12
  * GPIO1_12
  * "gpio", "44", "mux", "gpmc_ad12", "eeprom", "28"
  */
#define P8_12 11
 
/** @brief P8_13
  * EHRPWM2B
  * "gpio", "23", "mux", "gpmc_ad9", "eeprom", "15"
  */
#define P8_13 12
 
/** @brief P8_14
  * GPIO0_26
  * "gpio", "26", "mux", "gpmc_ad10", "eeprom", "16"
  */
#define P8_14 13
 
/** @brief P8_15
  * GPIO1_15
  * "gpio", "47", "mux", "gpmc_ad15", "eeprom", "31"
  */
#define P8_15 14
 
/** @brief P8_16
  * GPIO1_14
  * "gpio", "46", "mux", "gpmc_ad14", "eeprom", "30"
  */
#define P8_16 15
 
/** @brief P8_17
  * GPIO0_27
  * "gpio", "27", "mux", "gpmc_ad11", "eeprom", "17"
  */
#define P8_17 16
 
/** @brief P8_18
  * GPIO2_1
  * "gpio", "65", "mux", "gpmc_clk", "eeprom", "40"
  */
#define P8_18 17
 
/** @brief P8_19
  * EHRPWM2A
  * "gpio", "22", "mux", "gpmc_ad8", "eeprom", "14"
  */
#define P8_19 18
 
/** @brief P8_20
  * GPIO1_31
  * "gpio", "63", "mux", "gpmc_csn2", "eeprom", "39"
  */
#define P8_20 19
 
/** @brief P8_21
  * GPIO1_30
  * "gpio", "62", "mux", "gpmc_csn1", "eeprom", "38"
  */
#define P8_21 20
 
/** @brief P8_22
  * GPIO1_5
  * "gpio", "37", "mux", "gpmc_ad5", "eeprom", "25"
  */
#define P8_22 21
 
/** @brief P8_23
  * GPIO1_4
  * "gpio", "36", "mux", "gpmc_ad4", "eeprom", "24"
  */
#define P8_23 22
 
/** @brief P8_24
  * GPIO1_1
  * "gpio", "33", "mux", "gpmc_ad1", "eeprom", "21"
  */
#define P8_24 23
 
/** @brief P8_25
  * GPIO1_0
  * "gpio", "32", "mux", "gpmc_ad0", "eeprom", "20"
  */
#define P8_25 24
 
/** @brief P8_26
  * GPIO1_29
  * "gpio", "61", "mux", "gpmc_csn0", "eeprom", "37"
  */
#define P8_26 25
 
/** @brief P8_27
  * GPIO2_22
  * "gpio", "86", "mux", "lcd_vsync", "eeprom", "57"
  */
#define P8_27 26
 
/** @brief P8_28
  * GPIO2_24
  * "gpio", "88", "mux", "lcd_pclk", "eeprom", "59"
  */
#define P8_28 27
 
/** @brief P8_29
  * GPIO2_23
  * "gpio", "87", "mux", "lcd_hsync", "eeprom", "58"
  */
#define P8_29 28
 
/** @brief P8_30
  * GPIO2_25
  * "gpio", "89", "mux", "lcd_ac_bias_en", "eeprom", "60"
  */
#define P8_30 29
 
/** @brief P8_31
  * UART5_CTSN
  * "gpio", "10", "mux", "lcd_data14", "eeprom", "7"
  */
#define P8_31 30
 
/** @brief P8_32
  * UART5_RTSN
  * "gpio", "11", "mux", "lcd_data15", "eeprom", "8"
  */
#define P8_32 31
 
/** @brief P8_33
  * UART4_RTSN
  * "gpio", "9", "mux", "lcd_data13", "eeprom", "6"
  */
#define P8_33 32
 
/** @brief P8_34
  * UART3_RTSN
  * "gpio", "81", "mux", "lcd_data11", "eeprom", "56"
  */
#define P8_34 33
 
/** @brief P8_35
  * UART4_CTSN
  * "gpio", "8", "mux", "lcd_data12", "eeprom", "5"
  */
#define P8_35 34
 
/** @brief P8_36
  * UART3_CTSN
  * "gpio", "80", "mux", "lcd_data10", "eeprom", "55"
  */
#define P8_36 35
 
/** @brief P8_37
  * UART5_TXD
  * "gpio", "78", "mux", "lcd_data8", "eeprom", "53"
  */
#define P8_37 36
 
/** @brief P8_38
  * UART5_RXD
  * "gpio", "79", "mux", "lcd_data9", "eeprom", "54"
  */
#define P8_38 37
 
/** @brief P8_39
  * GPIO2_12
  * "gpio", "76", "mux", "lcd_data6", "eeprom", "51"
  */
#define P8_39 38
 
/** @brief P8_40
  * GPIO2_13
  * "gpio", "77", "mux", "lcd_data7", "eeprom", "52"
  */
#define P8_40 39
 
/** @brief P8_41
  * GPIO2_10
  * "gpio", "74", "mux", "lcd_data4", "eeprom", "49"
  */
#define P8_41 40
 
/** @brief P8_42
  * GPIO2_11
  * "gpio", "75", "mux", "lcd_data5", "eeprom", "50"
  */
#define P8_42 41
 
/** @brief P8_43
  * GPIO2_8
  * "gpio", "72", "mux", "lcd_data2", "eeprom", "47"
  */
#define P8_43 42
 
/** @brief P8_44
  * GPIO2_9
  * "gpio", "73", "mux", "lcd_data3", "eeprom", "48"
  */
#define P8_44 43
 
/** @brief P8_45
  * GPIO2_6
  * "gpio", "70", "mux", "lcd_data0", "eeprom", "45"
  */
#define P8_45 44
 
/** @brief P8_46
  * GPIO2_7
  * "gpio", "71", "mux", "lcd_data1", "eeprom", "46"
  */
#define P8_46 45
 
/** @brief P9_1
  * DGND
  * 
  */
#define P9_1 46
 
/** @brief P9_2
  * DGND
  * 
  */
#define P9_2 47
 
/** @brief P9_3
  * VDD_3V3
  * 
  */
#define P9_3 48
 
/** @brief P9_4
  * VDD_3V3
  * 
  */
#define P9_4 49
 
/** @brief P9_5
  * VDD_5V
  * 
  */
#define P9_5 50
 
/** @brief P9_6
  * VDD_5V
  * 
  */
#define P9_6 51
 
/** @brief P9_7
  * SYS_5V
  * 
  */
#define P9_7 52
 
/** @brief P9_8
  * SYS_5V
  * 
  */
#define P9_8 53
 
/** @brief P9_9
  * PWR_BUT
  * 
  */
#define P9_9 54
 
/** @brief P9_10
  * SYS_RESETn
  * 
  */
#define P9_10 55
 
/** @brief P9_11
  * UART4_RXD
  * "gpio", "30", "mux", "gpmc_wait0", "eeprom", "18"
  */
#define P9_11 56
 
/** @brief P9_12
  * GPIO1_28
  * "gpio", "60", "mux", "gpmc_ben1", "eeprom", "36"
  */
#define P9_12 57
 
/** @brief P9_13
  * UART4_TXD
  * "gpio", "31", "mux", "gpmc_wpn", "eeprom", "19"
  */
#define P9_13 58
 
/** @brief P9_14
  * EHRPWM1A
  * "gpio", "50", "mux", "gpmc_a2", "eeprom", "34"
  */
#define P9_14 59
 
/** @brief P9_15
  * GPIO1_16
  * "gpio", "48", "mux", "mii1_rxd3", "eeprom", "32"
  */
#define P9_15 60
 
/** @brief P9_16
  * EHRPWM1B
  * "gpio", "51", "mux", "gpmc_a3", "eeprom", "35"
  */
#define P9_16 61
 
/** @brief P9_17
  * I2C1_SCL
  * "gpio", "5", "mux", "spi0_cs0", "eeprom", "3"
  */
#define P9_17 62
 
/** @brief P9_18
  * I2C1_SDA
  * "gpio", "4", "mux", "spi0_d1", "eeprom", "2"
  */
#define P9_18 63
 
/** @brief P9_19
  * I2C2_SCL
  * "gpio", "13", "mux", "uart1_rtsn", "eeprom", "9"
  */
#define P9_19 64
 
/** @brief P9_20
  * I2C2_SDA
  * "gpio", "12", "mux", "uart1_ctsn", "eeprom", "10"
  */
#define P9_20 65
 
/** @brief P9_21
  * UART2_TXD
  * "gpio", "3", "mux", "spi0_d0", "eeprom", "1"
  */
#define P9_21 66
 
/** @brief P9_22
  * UART2_RXD
  * "gpio", "2", "mux", "spi0_sclk", "eeprom", "0"
  */
#define P9_22 67
 
/** @brief P9_23
  * GPIO1_17
  * "gpio", "49", "mux", "gpmc_a1", "eeprom", "33"
  */
#define P9_23 68
 
/** @brief P9_24
  * UART1_TXD
  * "gpio", "15", "mux", "uart1_txd", "eeprom", "12"
  */
#define P9_24 69
 
/** @brief P9_25
  * GPIO3_21
  * "gpio", "117", "mux", "mcasp0_ahclkx", "eeprom", "66"
  */
#define P9_25 70
 
/** @brief P9_26
  * UART1_RXD
  * "gpio", "14", "mux", "uart1_rxd", "eeprom", "11"
  */
#define P9_26 71
 
/** @brief P9_27
  * GPIO3_19
  * "gpio", "115", "mux", "mcasp0_fsr", "eeprom", "64"
  */
#define P9_27 72
 
/** @brief P9_28
  * SPI1_CS0
  * "gpio", "113", "mux", "mcasp0_ahclkr", "eeprom", "63"
  */
#define P9_28 73
 
/** @brief P9_29
  * SPI1_D0
  * "gpio", "111", "mux", "mcasp0_fsx", "eeprom", "61"
  */
#define P9_29 74
 
/** @brief P9_30
  * SPI1_D1
  * "gpio", "112", "mux", "mcasp0_axr0", "eeprom", "62"
  */
#define P9_30 75
 
/** @brief P9_31
  * SPI1_SCLK
  * "gpio", "110", "mux", "mcasp0_aclkx", "eeprom", "65"
  */
#define P9_31 76
 
/** @brief P9_32
  * VDD_ADC
  * 
  */
#define P9_32 77
 
/** @brief P9_33
  * AIN4
  * "eeprom", "71"
  */
#define P9_33 78
 
/** @brief P9_34
  * GNDA_ADC
  * 
  */
#define P9_34 79
 
/** @brief P9_35
  * AIN6
  * "eeprom", "73"
  */
#define P9_35 80
 
/** @brief P9_36
  * AIN5
  * "eeprom", "72"
  */
#define P9_36 81
 
/** @brief P9_37
  * AIN2
  * "eeprom", "69"
  */
#define P9_37 82
 
/** @brief P9_38
  * AIN3
  * "eeprom", "70"
  */
#define P9_38 83
 
/** @brief P9_39
  * AIN0
  * "eeprom", "67"
  */
#define P9_39 84
 
/** @brief P9_40
  * AIN1
  * "eeprom", "68"
  */
#define P9_40 85
 
/** @brief P9_41
  * CLKOUT2
  * "gpio", "20", "mux", "xdma_event_intr1", "eeprom", "13"
  */
#define P9_41 86
 
/** @brief P9_42
  * GPIO0_7
  * "gpio", "7", "mux", "ecap0_in_pwm0_out", "eeprom", "4"
  */
#define P9_42 87
 
/** @brief P9_43
  * DGND
  * 
  */
#define P9_43 88
 
/** @brief P9_44
  * DGND
  * 
  */
#define P9_44 89
 
/** @brief P9_45
  * DGND
  * 
  */
#define P9_45 90
 
/** @brief P9_46
  * DGND
  * 
  */
#define P9_46 91
 
/** @brief USR0
  * USR0
  * "gpio", "53", "led", "usr0", "mux", "gpmc_a5"
  */
#define USR0 92
 
/** @brief USR1
  * USR1
  * "gpio", "54", "led", "usr1", "mux", "gpmc_a6"
  */
#define USR1 93
 
/** @brief USR2
  * USR2
  * "gpio", "55", "led", "usr2", "mux", "gpmc_a7"
  */
#define USR2 94
 
/** @brief USR3
  * USR3
  * "gpio", "56", "led", "usr3", "mux", "gpmc_a8"
  */
#define USR3 95
 
 
#endif /* _PINS_H */
