#include "pico/stdlib.h"
#include "stdio.h"

#define DEVICE_NAME "my-pico-device"
#define DEVICE_VRSN "v0.0.1"

uint32_t global_variable = 0;
const uint32_t constant_variable = 42;

int main()
{
    stdio_init_all();
    while (1)
    {
        printf("Hellow world\n");
        printf("device name: '%s', firmware version: %s\n", DEVICE_NAME, DEVICE_VRSN);

        char symbol = getchar();

        printf("ASCII код: %d\n", symbol);

        sleep_ms(1000);
    }
}