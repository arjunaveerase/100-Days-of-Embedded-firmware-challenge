#ifndef SFP_MAP_H
#define SFP_MAP_H

#include <stdint.h>

/* A2h Diagnostics (DDM) Offsets */
#define TEMP_MSB       96
#define TEMP_LSB       97

#define VOLT_MSB       98
#define VOLT_LSB       99

#define TX_BIAS_MSB    100
#define TX_BIAS_LSB    101

#define TX_PWR_MSB     102
#define TX_PWR_LSB     103

#define RX_PWR_MSB     104
#define RX_PWR_LSB     105

/* Alarm flags (simplified) */
#define ALARM_BYTE     112

/* Scaling constants (SFF-8472 standard) */
#define TEMP_SCALE     (1.0 / 256.0)     // °C
#define VOLT_SCALE     (100e-6)          // 100 µV per LSB
#define BIAS_SCALE     (2e-6)            // 2 µA per LSB
#define POWER_SCALE    (0.1e-6)          // 0.1 µW per LSB

#endif