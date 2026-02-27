#include "pico/stdlib.h"
#include "stdio.h"

#include "led/led.h"
#include "main.h"

int main()
{
    stdio_init_all();
    led_init();
    while (1)
    {
        int c = getchar();
        char symbol = (char)c;
        switch (symbol)
        {
        case 'e':
            led_enable();
            printf("LED on\n");
            break;
        case 'd':
            led_disable();
            printf("LED off\n");
            break;
        case 'v':
            printf("Device %s %s\n", DEVICE_NAME, DEVICE_VRSN);
            break;
        default:
            printf("Wrong input error. Options: 'e', 'd', 'v' -- got %c [%d]\n", symbol, symbol);
            break;
        }
    }
}