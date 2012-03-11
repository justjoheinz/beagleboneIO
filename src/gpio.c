#include "gpio.h"


PIN pins[] = {  
  {"DGND", 0, {}},
  {"DGND", 0, {}},
  {"GPIO1_6", 3, {{"gpio", "38"}, {"mux", "gpmc_ad6"}, {"eeprom", "26"}}},
  {"GPIO1_7", 3, {{"gpio", "39"}, {"mux", "gpmc_ad7"}, {"eeprom", "27"}}},
  {"GPIO1_2", 3, {{"gpio", "34"}, {"mux", "gpmc_ad2"}, {"eeprom", "22"}}},
  {"GPIO1_3", 3, {{"gpio", "35"}, {"mux", "gpmc_ad3"}, {"eeprom", "23"}}},
  {"TIMER4", 3, {{"gpio", "66"}, {"mux", "gpmc_advn_ale"}, {"eeprom", "41"}}},
  {"TIMER7", 3, {{"gpio", "67"}, {"mux", "gpmc_oen_ren"}, {"eeprom", "44"}}},
  {"TIMER5", 3, {{"gpio", "69"}, {"mux", "gpmc_ben0_cle"}, {"eeprom", "42"}}},
  {"TIMER6", 3, {{"gpio", "68"}, {"mux", "gpmc_wen"}, {"eeprom", "43"}}},
  {"GPIO1_13", 3, {{"gpio", "45"}, {"mux", "gpmc_ad13"}, {"eeprom", "29"}}},
  {"GPIO1_12", 3, {{"gpio", "44"}, {"mux", "gpmc_ad12"}, {"eeprom", "28"}}},
  {"EHRPWM2B", 3, {{"gpio", "23"}, {"mux", "gpmc_ad9"}, {"eeprom", "15"}}},
  {"GPIO0_26", 3, {{"gpio", "26"}, {"mux", "gpmc_ad10"}, {"eeprom", "16"}}},
  {"GPIO1_15", 3, {{"gpio", "47"}, {"mux", "gpmc_ad15"}, {"eeprom", "31"}}},
  {"GPIO1_14", 3, {{"gpio", "46"}, {"mux", "gpmc_ad14"}, {"eeprom", "30"}}},
  {"GPIO0_27", 3, {{"gpio", "27"}, {"mux", "gpmc_ad11"}, {"eeprom", "17"}}},
  {"GPIO2_1", 3, {{"gpio", "65"}, {"mux", "gpmc_clk"}, {"eeprom", "40"}}},
  {"EHRPWM2A", 3, {{"gpio", "22"}, {"mux", "gpmc_ad8"}, {"eeprom", "14"}}},
  {"GPIO1_31", 3, {{"gpio", "63"}, {"mux", "gpmc_csn2"}, {"eeprom", "39"}}},
  {"GPIO1_30", 3, {{"gpio", "62"}, {"mux", "gpmc_csn1"}, {"eeprom", "38"}}},
  {"GPIO1_5", 3, {{"gpio", "37"}, {"mux", "gpmc_ad5"}, {"eeprom", "25"}}},
  {"GPIO1_4", 3, {{"gpio", "36"}, {"mux", "gpmc_ad4"}, {"eeprom", "24"}}},
  {"GPIO1_1", 3, {{"gpio", "33"}, {"mux", "gpmc_ad1"}, {"eeprom", "21"}}},
  {"GPIO1_0", 3, {{"gpio", "32"}, {"mux", "gpmc_ad0"}, {"eeprom", "20"}}},
  {"GPIO1_29", 3, {{"gpio", "61"}, {"mux", "gpmc_csn0"}, {"eeprom", "37"}}},
  {"GPIO2_22", 3, {{"gpio", "86"}, {"mux", "lcd_vsync"}, {"eeprom", "57"}}},
  {"GPIO2_24", 3, {{"gpio", "88"}, {"mux", "lcd_pclk"}, {"eeprom", "59"}}},
  {"GPIO2_23", 3, {{"gpio", "87"}, {"mux", "lcd_hsync"}, {"eeprom", "58"}}},
  {"GPIO2_25", 3, {{"gpio", "89"}, {"mux", "lcd_ac_bias_en"}, {"eeprom", "60"}}},
  {"UART5_CTSN", 3, {{"gpio", "10"}, {"mux", "lcd_data14"}, {"eeprom", "7"}}},
  {"UART5_RTSN", 3, {{"gpio", "11"}, {"mux", "lcd_data15"}, {"eeprom", "8"}}},
  {"UART4_RTSN", 3, {{"gpio", "9"}, {"mux", "lcd_data13"}, {"eeprom", "6"}}},
  {"UART3_RTSN", 3, {{"gpio", "81"}, {"mux", "lcd_data11"}, {"eeprom", "56"}}},
  {"UART4_CTSN", 3, {{"gpio", "8"}, {"mux", "lcd_data12"}, {"eeprom", "5"}}},
  {"UART3_CTSN", 3, {{"gpio", "80"}, {"mux", "lcd_data10"}, {"eeprom", "55"}}},
  {"UART5_TXD", 3, {{"gpio", "78"}, {"mux", "lcd_data8"}, {"eeprom", "53"}}},
  {"UART5_RXD", 3, {{"gpio", "79"}, {"mux", "lcd_data9"}, {"eeprom", "54"}}},
  {"GPIO2_12", 3, {{"gpio", "76"}, {"mux", "lcd_data6"}, {"eeprom", "51"}}},
  {"GPIO2_13", 3, {{"gpio", "77"}, {"mux", "lcd_data7"}, {"eeprom", "52"}}},
  {"GPIO2_10", 3, {{"gpio", "74"}, {"mux", "lcd_data4"}, {"eeprom", "49"}}},
  {"GPIO2_11", 3, {{"gpio", "75"}, {"mux", "lcd_data5"}, {"eeprom", "50"}}},
  {"GPIO2_8", 3, {{"gpio", "72"}, {"mux", "lcd_data2"}, {"eeprom", "47"}}},
  {"GPIO2_9", 3, {{"gpio", "73"}, {"mux", "lcd_data3"}, {"eeprom", "48"}}},
  {"GPIO2_6", 3, {{"gpio", "70"}, {"mux", "lcd_data0"}, {"eeprom", "45"}}},
  {"GPIO2_7", 3, {{"gpio", "71"}, {"mux", "lcd_data1"}, {"eeprom", "46"}}},
  {"DGND", 0, {}},
  {"DGND", 0, {}},
  {"VDD_3V3", 0, {}},
  {"VDD_3V3", 0, {}},
  {"VDD_5V", 0, {}},
  {"VDD_5V", 0, {}},
  {"SYS_5V", 0, {}},
  {"SYS_5V", 0, {}},
  {"PWR_BUT", 0, {}},
  {"SYS_RESETn", 0, {}},
  {"UART4_RXD", 3, {{"gpio", "30"}, {"mux", "gpmc_wait0"}, {"eeprom", "18"}}},
  {"GPIO1_28", 3, {{"gpio", "60"}, {"mux", "gpmc_ben1"}, {"eeprom", "36"}}},
  {"UART4_TXD", 3, {{"gpio", "31"}, {"mux", "gpmc_wpn"}, {"eeprom", "19"}}},
  {"EHRPWM1A", 3, {{"gpio", "50"}, {"mux", "gpmc_a2"}, {"eeprom", "34"}}},
  {"GPIO1_16", 3, {{"gpio", "48"}, {"mux", "mii1_rxd3"}, {"eeprom", "32"}}},
  {"EHRPWM1B", 3, {{"gpio", "51"}, {"mux", "gpmc_a3"}, {"eeprom", "35"}}},
  {"I2C1_SCL", 3, {{"gpio", "5"}, {"mux", "spi0_cs0"}, {"eeprom", "3"}}},
  {"I2C1_SDA", 3, {{"gpio", "4"}, {"mux", "spi0_d1"}, {"eeprom", "2"}}},
  {"I2C2_SCL", 3, {{"gpio", "13"}, {"mux", "uart1_rtsn"}, {"eeprom", "9"}}},
  {"I2C2_SDA", 3, {{"gpio", "12"}, {"mux", "uart1_ctsn"}, {"eeprom", "10"}}},
  {"UART2_TXD", 3, {{"gpio", "3"}, {"mux", "spi0_d0"}, {"eeprom", "1"}}},
  {"UART2_RXD", 3, {{"gpio", "2"}, {"mux", "spi0_sclk"}, {"eeprom", "0"}}},
  {"GPIO1_17", 3, {{"gpio", "49"}, {"mux", "gpmc_a1"}, {"eeprom", "33"}}},
  {"UART1_TXD", 3, {{"gpio", "15"}, {"mux", "uart1_txd"}, {"eeprom", "12"}}},
  {"GPIO3_21", 3, {{"gpio", "117"}, {"mux", "mcasp0_ahclkx"}, {"eeprom", "66"}}},
  {"UART1_RXD", 3, {{"gpio", "14"}, {"mux", "uart1_rxd"}, {"eeprom", "11"}}},
  {"GPIO3_19", 3, {{"gpio", "115"}, {"mux", "mcasp0_fsr"}, {"eeprom", "64"}}},
  {"SPI1_CS0", 3, {{"gpio", "113"}, {"mux", "mcasp0_ahclkr"}, {"eeprom", "63"}}},
  {"SPI1_D0", 3, {{"gpio", "111"}, {"mux", "mcasp0_fsx"}, {"eeprom", "61"}}},
  {"SPI1_D1", 3, {{"gpio", "112"}, {"mux", "mcasp0_axr0"}, {"eeprom", "62"}}},
  {"SPI1_SCLK", 3, {{"gpio", "110"}, {"mux", "mcasp0_aclkx"}, {"eeprom", "65"}}},
  {"VDD_ADC", 0, {}},
  {"AIN4", 1, {{"eeprom", "71"}}},
  {"GNDA_ADC", 0, {}},
  {"AIN6", 1, {{"eeprom", "73"}}},
  {"AIN5", 1, {{"eeprom", "72"}}},
  {"AIN2", 1, {{"eeprom", "69"}}},
  {"AIN3", 1, {{"eeprom", "70"}}},
  {"AIN0", 1, {{"eeprom", "67"}}},
  {"AIN1", 1, {{"eeprom", "68"}}}
};

void gpio_inspect(const PIN *pin) {
  int i = 0;

  printf("Name: %s\n", pin->name);
  printf("\tno; %d\n", pin->no);
  for (i = 0; i < pin->no; i++) {
    printf("\t%s : %s\n",(pin->def[i]).key, (pin->def[i]).value);
  }
}

void gpio_mux(const PIN *pin, const char *value) {
  FILE *f;
  char buffer[128];
  const Pair *omap_pair;

  if ((omap_pair = get_pair_with_key(pin->def, pin->no, "mux")) == NULL) {
    assert(0);
  }
  sprintf(buffer, "/sys/kernel/debug/omap_mux/%s", omap_pair->value);
  if ((f = fopen(buffer, "w")) == NULL) {
    perror("can't open pin for muxing");
    assert(0);
  }
  fprintf(f, "%s", value);
  fclose(f);
}

void gpio_export(unsigned gpio) {
  FILE *pin;

  if ( (pin  = fopen("/sys/class/gpio/export","w")) != NULL) {
    fprintf(pin, "%u", gpio);
    fclose(pin);
    return;
  }
  perror("failed to export pin");
  assert(0);
}

void gpio_unexport(unsigned gpio) {
  FILE *pin;
  if ( (pin  = fopen("/sys/class/gpio/unexport","w")) != NULL) {
    fprintf(pin, "%u", gpio);
    fclose(pin);
    return;
  }
  perror("failed to unexport pin");
  assert(0);
}

void gpio_set_direction(unsigned gpio, unsigned direction) {
  FILE *pin;
  char buf[128];

  sprintf(buf, "/sys/class/gpio/gpio%u/direction", gpio);
  if ((pin = fopen(buf, "w")) != NULL) {
    switch (direction) {
    case INPUT: fprintf(pin, "in");
      break;
    case OUTPUT: fprintf(pin, "out");
      break;
    default:
      assert(0);
    }
    fclose(pin);
    return;
  }
  perror("Failed to set direction for pin");
  assert(0);
}

void gpio_write_value(unsigned gpio, unsigned value) {
  FILE *pin;
  char buf[128];
  sprintf(buf, "/sys/class/gpio/gpio%u/value", gpio);
  if ((pin = fopen(buf,"w")) != NULL) {
    fprintf(pin, "%u", value);
    fclose(pin);
    return;
  }
  perror("failed to set value for pin");
  assert(0);
}

void gpio_read_value(unsigned gpio, unsigned *value) {
  FILE *pin;
  char buf[128];

  sprintf(buf, "/sys/class/gpio/gpio%u/value", gpio);
  if ((pin = fopen(buf,"r")) != NULL) {
    fscanf(pin, "%u", value);
    fclose(pin);
    return;
  }
  perror("Failed to get value for pin");
  assert(0);
}

void gpio_set_edge(unsigned gpio, const char* edge) {
  FILE *pin;
  char buf[128];
  sprintf(buf, "/sys/class/gpio/gpio%u/edge", gpio);
  if ((pin = fopen(buf,"w")) != NULL) {
    fprintf(pin, "%s", edge);
    fclose(pin);
    return;
  }
  perror("failed to set edge");
  assert(0);
}

void gpio_set_active_low(unsigned gpio, unsigned value) {
  FILE *pin;
  char buf[128];

  assert(value == HIGH || value == LOW);
  sprintf(buf, "/sys/class/gpio/gpio%u/active_low", gpio);
  if ((pin = fopen(buf,"w")) != NULL) {
    fprintf(pin, "%u", value);
    fclose(pin);
    return;
  }
  perror("failed to set active low for pin");
  assert(0);
}


int gpio_get_filedescriptor(unsigned gpio) {
  int fd;
  char buf[128];

  sprintf(buf, "/sys/class/gpio/gpio%u/value", gpio);
  fd = open(buf, O_RDONLY | O_NONBLOCK );
  assert(fd != -1);
  return fd;
}

void gpio_close_filedescriptor(int fd) {
  close(fd);
}
