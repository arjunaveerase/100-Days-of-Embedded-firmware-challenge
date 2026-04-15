
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#include "parser.h"

#ifdef __linux__
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/i2c-dev.h>
#endif

#define BUFFER_SIZE 256

/* Read from binary dump */
int read_from_file(const char *filename, uint8_t *buffer) {
    FILE *fp = fopen(filename, "rb");
    if (!fp) {
        perror("File open failed");
        return -1;
    }

    size_t read_bytes = fread(buffer, 1, BUFFER_SIZE, fp);
    fclose(fp);

    if (read_bytes != BUFFER_SIZE) {
        printf("Error: Expected 256 bytes, got %zu\n", read_bytes);
        return -1;
    }

    return 0;
}

/* Read from I2C device */
int read_from_i2c(const char *device, int addr, uint8_t *buffer) {
#ifndef __linux__
    printf("I2C not supported on this system\n");
    return -1;
#else
    int file = open(device, O_RDWR);
    if (file < 0) {
        perror("I2C open failed");
        return -1;
    }

    if (ioctl(file, I2C_SLAVE, addr) < 0) {
        perror("I2C ioctl failed");
        close(file);
        return -1;
    }

    /* Set EEPROM offset to 0 */
    uint8_t offset = 0x00;
    if (write(file, &offset, 1) != 1) {
        perror("I2C write offset failed");
        close(file);
        return -1;
    }

    if (read(file, buffer, BUFFER_SIZE) != BUFFER_SIZE) {
        perror("I2C read failed");
        close(file);
        return -1;
    }

    close(file);
    return 0;
#endif
}

int main(int argc, char *argv[]) {
    uint8_t buffer[BUFFER_SIZE];

    if (argc < 2) {
        printf("Usage:\n");
        printf("  %s file <dump.bin>\n", argv[0]);
        printf("  %s i2c <device> <addr>\n", argv[0]);
        return -1;
    }

    if (strcmp(argv[1], "file") == 0) {
        if (argc != 3) {
            printf("Invalid arguments for file mode\n");
            return -1;
        }

        if (read_from_file(argv[2], buffer) != 0)
            return -1;

    } else if (strcmp(argv[1], "i2c") == 0) {
        if (argc != 4) {
            printf("Invalid arguments for i2c mode\n");
            return -1;
        }

        int addr = (int)strtol(argv[3], NULL, 0);

        if (read_from_i2c(argv[2], addr, buffer) != 0)
            return -1;

    } else {
        printf("Unknown mode\n");
        return -1;
    }

    parse_sfp(buffer);
    return 0;
}