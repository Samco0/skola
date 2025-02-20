#include "stm32f4xx.h"
#define LED1 14
#define LED2 15

uint16_t i, j;

void declareLED(volatile uint16_t led);
void wait(volatile uint16_t time);
void turnOn(volatile uint16_t led);
void turnOff(volatile uint16_t led);

int main() {
    RCC->AHB1ENR |= (1 << 3);

    declareLED(LED1);
    declareLED(LED2);

    while (1) {
        turnOn(LED1);
        wait(400);
        turnOff(LED1);
        wait(400);
        
        turnOn(LED2);
        wait(400);
        turnOff(LED2);
        wait(400);
    }

    return 0;
}

//declaring a LED 
void declareLED(volatile uint16_t led){
	GPIOD->MODER &= ~(3UL << led * 2);
	GPIOD->MODER |= (1UL << led * 2);
}

//function for waiting
void wait(volatile uint16_t time) {
    for (i = 0; i < time; i++) {
        for (j = 0; j < time; j++) {
            // Empty
        }
    }
}

//turning on a LED
void turnOn(volatile uint16_t led){
	GPIOD->ODR |= (1 << led);
}

//turning off a LED
void turnOff(volatile uint16_t led){
	GPIOD->ODR &= ~(1 << led);
}