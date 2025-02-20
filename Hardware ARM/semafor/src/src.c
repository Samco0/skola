#include "stm32f4xx.h"

void declareLED(volatile uint16_t led);
void turnOn(volatile uint16_t led);
void turnOff(volatile uint16_t led);
void wait(volatile uint16_t time);

volatile uint16_t i, j;

#define red 12
#define yellow 13
#define green 14

int main(void){
    RCC->AHB1ENR |= (1UL << 4);

    for (i = 12; i < 15; i++)
    {
        declareLED(i);
        turnOff(i);
    }

    while(1){
        turnOn(red);
        wait(2000);

        turnOn(yellow);
        wait(2000);

        turnOff(red);
        turnOff(yellow);

        turnOn(green);
        wait(5000);

        turnOff(green);

        turnOn(yellow);
        wait(1000);
        turnOff(yellow);
    }
    
    return 0;
}

//declaring a LED 
void declareLED(volatile uint16_t led){
    GPIOE->MODER &= ~(3UL << (led * 2));
    GPIOE->MODER |= (1UL << (led * 2));
}

//turning on a LED
void turnOn(volatile uint16_t led){
    GPIOE->ODR &= ~(1 << led);
}

//turning off a LED
void turnOff(volatile uint16_t led){
    GPIOE->ODR |= (1 << led);
}

//function for waiting
void wait(volatile uint16_t time) {
    for (i = 0; i < time; i++) {
        for (j = 0; j < time; j++) {
            // Empty
        }
    }
}