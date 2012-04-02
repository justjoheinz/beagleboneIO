/** @file beaglepins.c
 * @brief Definition of pin layout
 *
 * AUTOMATICALLY GENERATED - PLEASE DO NOT MODIFY
 */
#include "beaglepins.h"
#include "beaglegpio.h"

PIN pins[] = {
/* P8_1 */
{"DGND", 0, {
	}	
},
/* P8_2 */
{"DGND", 0, {
	}	
},
/* P8_3 */
{"GPIO1_6", 3, {
	{"gpio", "38"},
	{"mux", "gpmc_ad6"},
	{"eeprom", "26"}
	}	
},
/* P8_4 */
{"GPIO1_7", 3, {
	{"gpio", "39"},
	{"mux", "gpmc_ad7"},
	{"eeprom", "27"}
	}	
},
/* P8_5 */
{"GPIO1_2", 3, {
	{"gpio", "34"},
	{"mux", "gpmc_ad2"},
	{"eeprom", "22"}
	}	
},
/* P8_6 */
{"GPIO1_3", 3, {
	{"gpio", "35"},
	{"mux", "gpmc_ad3"},
	{"eeprom", "23"}
	}	
},
/* P8_7 */
{"TIMER4", 3, {
	{"gpio", "66"},
	{"mux", "gpmc_advn_ale"},
	{"eeprom", "41"}
	}	
},
/* P8_8 */
{"TIMER7", 3, {
	{"gpio", "67"},
	{"mux", "gpmc_oen_ren"},
	{"eeprom", "44"}
	}	
},
/* P8_9 */
{"TIMER5", 3, {
	{"gpio", "69"},
	{"mux", "gpmc_ben0_cle"},
	{"eeprom", "42"}
	}	
},
/* P8_10 */
{"TIMER6", 3, {
	{"gpio", "68"},
	{"mux", "gpmc_wen"},
	{"eeprom", "43"}
	}	
},
/* P8_11 */
{"GPIO1_13", 3, {
	{"gpio", "45"},
	{"mux", "gpmc_ad13"},
	{"eeprom", "29"}
	}	
},
/* P8_12 */
{"GPIO1_12", 3, {
	{"gpio", "44"},
	{"mux", "gpmc_ad12"},
	{"eeprom", "28"}
	}	
},
/* P8_13 */
{"EHRPWM2B", 3, {
	{"gpio", "23"},
	{"mux", "gpmc_ad9"},
	{"eeprom", "15"}
	}	
},
/* P8_14 */
{"GPIO0_26", 3, {
	{"gpio", "26"},
	{"mux", "gpmc_ad10"},
	{"eeprom", "16"}
	}	
},
/* P8_15 */
{"GPIO1_15", 3, {
	{"gpio", "47"},
	{"mux", "gpmc_ad15"},
	{"eeprom", "31"}
	}	
},
/* P8_16 */
{"GPIO1_14", 3, {
	{"gpio", "46"},
	{"mux", "gpmc_ad14"},
	{"eeprom", "30"}
	}	
},
/* P8_17 */
{"GPIO0_27", 3, {
	{"gpio", "27"},
	{"mux", "gpmc_ad11"},
	{"eeprom", "17"}
	}	
},
/* P8_18 */
{"GPIO2_1", 3, {
	{"gpio", "65"},
	{"mux", "gpmc_clk"},
	{"eeprom", "40"}
	}	
},
/* P8_19 */
{"EHRPWM2A", 3, {
	{"gpio", "22"},
	{"mux", "gpmc_ad8"},
	{"eeprom", "14"}
	}	
},
/* P8_20 */
{"GPIO1_31", 3, {
	{"gpio", "63"},
	{"mux", "gpmc_csn2"},
	{"eeprom", "39"}
	}	
},
/* P8_21 */
{"GPIO1_30", 3, {
	{"gpio", "62"},
	{"mux", "gpmc_csn1"},
	{"eeprom", "38"}
	}	
},
/* P8_22 */
{"GPIO1_5", 3, {
	{"gpio", "37"},
	{"mux", "gpmc_ad5"},
	{"eeprom", "25"}
	}	
},
/* P8_23 */
{"GPIO1_4", 3, {
	{"gpio", "36"},
	{"mux", "gpmc_ad4"},
	{"eeprom", "24"}
	}	
},
/* P8_24 */
{"GPIO1_1", 3, {
	{"gpio", "33"},
	{"mux", "gpmc_ad1"},
	{"eeprom", "21"}
	}	
},
/* P8_25 */
{"GPIO1_0", 3, {
	{"gpio", "32"},
	{"mux", "gpmc_ad0"},
	{"eeprom", "20"}
	}	
},
/* P8_26 */
{"GPIO1_29", 3, {
	{"gpio", "61"},
	{"mux", "gpmc_csn0"},
	{"eeprom", "37"}
	}	
},
/* P8_27 */
{"GPIO2_22", 3, {
	{"gpio", "86"},
	{"mux", "lcd_vsync"},
	{"eeprom", "57"}
	}	
},
/* P8_28 */
{"GPIO2_24", 3, {
	{"gpio", "88"},
	{"mux", "lcd_pclk"},
	{"eeprom", "59"}
	}	
},
/* P8_29 */
{"GPIO2_23", 3, {
	{"gpio", "87"},
	{"mux", "lcd_hsync"},
	{"eeprom", "58"}
	}	
},
/* P8_30 */
{"GPIO2_25", 3, {
	{"gpio", "89"},
	{"mux", "lcd_ac_bias_en"},
	{"eeprom", "60"}
	}	
},
/* P8_31 */
{"UART5_CTSN", 3, {
	{"gpio", "10"},
	{"mux", "lcd_data14"},
	{"eeprom", "7"}
	}	
},
/* P8_32 */
{"UART5_RTSN", 3, {
	{"gpio", "11"},
	{"mux", "lcd_data15"},
	{"eeprom", "8"}
	}	
},
/* P8_33 */
{"UART4_RTSN", 3, {
	{"gpio", "9"},
	{"mux", "lcd_data13"},
	{"eeprom", "6"}
	}	
},
/* P8_34 */
{"UART3_RTSN", 3, {
	{"gpio", "81"},
	{"mux", "lcd_data11"},
	{"eeprom", "56"}
	}	
},
/* P8_35 */
{"UART4_CTSN", 3, {
	{"gpio", "8"},
	{"mux", "lcd_data12"},
	{"eeprom", "5"}
	}	
},
/* P8_36 */
{"UART3_CTSN", 3, {
	{"gpio", "80"},
	{"mux", "lcd_data10"},
	{"eeprom", "55"}
	}	
},
/* P8_37 */
{"UART5_TXD", 3, {
	{"gpio", "78"},
	{"mux", "lcd_data8"},
	{"eeprom", "53"}
	}	
},
/* P8_38 */
{"UART5_RXD", 3, {
	{"gpio", "79"},
	{"mux", "lcd_data9"},
	{"eeprom", "54"}
	}	
},
/* P8_39 */
{"GPIO2_12", 3, {
	{"gpio", "76"},
	{"mux", "lcd_data6"},
	{"eeprom", "51"}
	}	
},
/* P8_40 */
{"GPIO2_13", 3, {
	{"gpio", "77"},
	{"mux", "lcd_data7"},
	{"eeprom", "52"}
	}	
},
/* P8_41 */
{"GPIO2_10", 3, {
	{"gpio", "74"},
	{"mux", "lcd_data4"},
	{"eeprom", "49"}
	}	
},
/* P8_42 */
{"GPIO2_11", 3, {
	{"gpio", "75"},
	{"mux", "lcd_data5"},
	{"eeprom", "50"}
	}	
},
/* P8_43 */
{"GPIO2_8", 3, {
	{"gpio", "72"},
	{"mux", "lcd_data2"},
	{"eeprom", "47"}
	}	
},
/* P8_44 */
{"GPIO2_9", 3, {
	{"gpio", "73"},
	{"mux", "lcd_data3"},
	{"eeprom", "48"}
	}	
},
/* P8_45 */
{"GPIO2_6", 3, {
	{"gpio", "70"},
	{"mux", "lcd_data0"},
	{"eeprom", "45"}
	}	
},
/* P8_46 */
{"GPIO2_7", 3, {
	{"gpio", "71"},
	{"mux", "lcd_data1"},
	{"eeprom", "46"}
	}	
},
/* P9_1 */
{"DGND", 0, {
	}	
},
/* P9_2 */
{"DGND", 0, {
	}	
},
/* P9_3 */
{"VDD_3V3", 0, {
	}	
},
/* P9_4 */
{"VDD_3V3", 0, {
	}	
},
/* P9_5 */
{"VDD_5V", 0, {
	}	
},
/* P9_6 */
{"VDD_5V", 0, {
	}	
},
/* P9_7 */
{"SYS_5V", 0, {
	}	
},
/* P9_8 */
{"SYS_5V", 0, {
	}	
},
/* P9_9 */
{"PWR_BUT", 0, {
	}	
},
/* P9_10 */
{"SYS_RESETn", 0, {
	}	
},
/* P9_11 */
{"UART4_RXD", 3, {
	{"gpio", "30"},
	{"mux", "gpmc_wait0"},
	{"eeprom", "18"}
	}	
},
/* P9_12 */
{"GPIO1_28", 3, {
	{"gpio", "60"},
	{"mux", "gpmc_ben1"},
	{"eeprom", "36"}
	}	
},
/* P9_13 */
{"UART4_TXD", 3, {
	{"gpio", "31"},
	{"mux", "gpmc_wpn"},
	{"eeprom", "19"}
	}	
},
/* P9_14 */
{"EHRPWM1A", 3, {
	{"gpio", "50"},
	{"mux", "gpmc_a2"},
	{"eeprom", "34"}
	}	
},
/* P9_15 */
{"GPIO1_16", 3, {
	{"gpio", "48"},
	{"mux", "mii1_rxd3"},
	{"eeprom", "32"}
	}	
},
/* P9_16 */
{"EHRPWM1B", 3, {
	{"gpio", "51"},
	{"mux", "gpmc_a3"},
	{"eeprom", "35"}
	}	
},
/* P9_17 */
{"I2C1_SCL", 3, {
	{"gpio", "5"},
	{"mux", "spi0_cs0"},
	{"eeprom", "3"}
	}	
},
/* P9_18 */
{"I2C1_SDA", 3, {
	{"gpio", "4"},
	{"mux", "spi0_d1"},
	{"eeprom", "2"}
	}	
},
/* P9_19 */
{"I2C2_SCL", 3, {
	{"gpio", "13"},
	{"mux", "uart1_rtsn"},
	{"eeprom", "9"}
	}	
},
/* P9_20 */
{"I2C2_SDA", 3, {
	{"gpio", "12"},
	{"mux", "uart1_ctsn"},
	{"eeprom", "10"}
	}	
},
/* P9_21 */
{"UART2_TXD", 3, {
	{"gpio", "3"},
	{"mux", "spi0_d0"},
	{"eeprom", "1"}
	}	
},
/* P9_22 */
{"UART2_RXD", 3, {
	{"gpio", "2"},
	{"mux", "spi0_sclk"},
	{"eeprom", "0"}
	}	
},
/* P9_23 */
{"GPIO1_17", 3, {
	{"gpio", "49"},
	{"mux", "gpmc_a1"},
	{"eeprom", "33"}
	}	
},
/* P9_24 */
{"UART1_TXD", 3, {
	{"gpio", "15"},
	{"mux", "uart1_txd"},
	{"eeprom", "12"}
	}	
},
/* P9_25 */
{"GPIO3_21", 3, {
	{"gpio", "117"},
	{"mux", "mcasp0_ahclkx"},
	{"eeprom", "66"}
	}	
},
/* P9_26 */
{"UART1_RXD", 3, {
	{"gpio", "14"},
	{"mux", "uart1_rxd"},
	{"eeprom", "11"}
	}	
},
/* P9_27 */
{"GPIO3_19", 3, {
	{"gpio", "115"},
	{"mux", "mcasp0_fsr"},
	{"eeprom", "64"}
	}	
},
/* P9_28 */
{"SPI1_CS0", 3, {
	{"gpio", "113"},
	{"mux", "mcasp0_ahclkr"},
	{"eeprom", "63"}
	}	
},
/* P9_29 */
{"SPI1_D0", 3, {
	{"gpio", "111"},
	{"mux", "mcasp0_fsx"},
	{"eeprom", "61"}
	}	
},
/* P9_30 */
{"SPI1_D1", 3, {
	{"gpio", "112"},
	{"mux", "mcasp0_axr0"},
	{"eeprom", "62"}
	}	
},
/* P9_31 */
{"SPI1_SCLK", 3, {
	{"gpio", "110"},
	{"mux", "mcasp0_aclkx"},
	{"eeprom", "65"}
	}	
},
/* P9_32 */
{"VDD_ADC", 0, {
	}	
},
/* P9_33 */
{"AIN4", 1, {
	{"eeprom", "71"}
	}	
},
/* P9_34 */
{"GNDA_ADC", 0, {
	}	
},
/* P9_35 */
{"AIN6", 1, {
	{"eeprom", "73"}
	}	
},
/* P9_36 */
{"AIN5", 1, {
	{"eeprom", "72"}
	}	
},
/* P9_37 */
{"AIN2", 1, {
	{"eeprom", "69"}
	}	
},
/* P9_38 */
{"AIN3", 1, {
	{"eeprom", "70"}
	}	
},
/* P9_39 */
{"AIN0", 1, {
	{"eeprom", "67"}
	}	
},
/* P9_40 */
{"AIN1", 1, {
	{"eeprom", "68"}
	}	
},
/* P9_41 */
{"CLKOUT2", 3, {
	{"gpio", "20"},
	{"mux", "xdma_event_intr1"},
	{"eeprom", "13"}
	}	
},
/* P9_42 */
{"GPIO0_7", 3, {
	{"gpio", "7"},
	{"mux", "ecap0_in_pwm0_out"},
	{"eeprom", "4"}
	}	
},
/* P9_43 */
{"DGND", 0, {
	}	
},
/* P9_44 */
{"DGND", 0, {
	}	
},
/* P9_45 */
{"DGND", 0, {
	}	
},
/* P9_46 */
{"DGND", 0, {
	}	
},
/* USR0 */
{"USR0", 3, {
	{"gpio", "53"},
	{"led", "usr0"},
	{"mux", "gpmc_a5"}
	}	
},
/* USR1 */
{"USR1", 3, {
	{"gpio", "54"},
	{"led", "usr1"},
	{"mux", "gpmc_a6"}
	}	
},
/* USR2 */
{"USR2", 3, {
	{"gpio", "55"},
	{"led", "usr2"},
	{"mux", "gpmc_a7"}
	}	
},
/* USR3 */
{"USR3", 3, {
	{"gpio", "56"},
	{"led", "usr3"},
	{"mux", "gpmc_a8"}
	}	
}
};
