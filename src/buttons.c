#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "pico/stdlib.h"
#include "hardware/uart.h"
#include "hardware/irq.h"

//global variables
int DISPLAY_MODE = 0; //1, 2, or 3 (0 is off)
//change to whatever data it displays, and gpio pin used
int GPIO_PIN_DATA1 = 1;
int GPIO_PIN_DATA2 = 2;
int GPIO_PIN_DATA3 = 3;

/* 
WIRING NOTES:
button set up:
    1) 3.3V
    2) gpio pin
    set internal pull down
*/

void gpio_setup()
{
    //initialize pins
    gpio_init(GPIO_PIN_DATA1);
    gpio_init(GPIO_PIN_DATA2);
    gpio_init(GPIO_PIN_DATA3);

    //set them to input
    gpio_set_dir(GPIO_PIN_DATA1, false);
    gpio_set_dir(GPIO_PIN_DATA2, false);
    gpio_set_dir(GPIO_PIN_DATA3, false);

    //internal pull down resistors
    gpio_pull_down(GPIO_PIN_DATA1);
    gpio_pull_down(GPIO_PIN_DATA2);
    gpio_pull_down(GPIO_PIN_DATA3);
}

gpio_pin_display()
{
}