#include <stdio.h>
#include <stdint.h>
#include "sfp_map.h"
#include "parser.h"

static uint16_t combine_bytes(uint8_t msb, uint8_t lsb) {
    return ((uint16_t)msb << 8) | lsb;
}

static double decode_temp(uint16_t raw) {
    int16_t signed_val = (int16_t)raw;
    return signed_val / 256.0;
}

void parse_sfp(uint8_t *data) {
    printf("RAW TEMP  : %02X %02X\n", data[TEMP_MSB], data[TEMP_LSB]);
    printf("RAW VOLT  : %02X %02X\n", data[VOLT_MSB], data[VOLT_LSB]);
    printf("RAW BIAS  : %02X %02X\n", data[TX_BIAS_MSB], data[TX_BIAS_LSB]);
    printf("RAW TXP   : %02X %02X\n", data[TX_PWR_MSB], data[TX_PWR_LSB]);
    printf("RAW RXP   : %02X %02X\n", data[RX_PWR_MSB], data[RX_PWR_LSB]);
    printf("RAW ALARM : %02X\n", data[ALARM_BYTE]);

    uint16_t temp_raw = combine_bytes(data[TEMP_MSB], data[TEMP_LSB]);
    printf("TEMP RAW  : 0x%04X\n", temp_raw);
    printf("TEMP DEG   : %.2f\n", decode_temp(temp_raw));
}