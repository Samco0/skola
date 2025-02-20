#include "stm32f4xx.h"

volatile uint8_t out;

void declareLED(volatile uint16_t led);
void wait(volatile uint16_t time);
void turnOn(volatile uint16_t led);
void turnOff(volatile uint16_t led);
void displayBinary(volatile uint16_t led);

volatile uint16_t LEDindex;
volatile uint16_t pocet;

int main(void) {
    RCC->AHB1ENR |= (1UL << 4);

    for (LEDindex = 12; LEDindex < 16; LEDindex++) {
        declareLED(LEDindex);
    }

    while (1) {
        for (pocet = 1; pocet < 16; pocet++) {
            displayBinary(pocet);
            wait(1000);
        }
    }
    return 0;
}

// Declaring an LED
void declareLED(volatile uint16_t led) {
    GPIOE->MODER &= ~(3UL << led * 2);
    GPIOE->MODER |= (1UL << led * 2);
}

// Wait function
void wait(volatile uint16_t time) {
    volatile uint16_t a, b;
    for (a = 0; a < time; a++) {
        for (b = 0; b < time; b++) {
        }
    }
}

// Turns an LED on
void turnOn(volatile uint16_t led) {
    GPIOE->ODR |= (1 << led);
}

// Turns an LED off
void turnOff(volatile uint16_t led) {
    GPIOE->ODR &= ~(1 << led);
}

// Transfers number into binary and updates LEDs
void displayBinary(volatile uint16_t number) {
    for (volatile int i = 0; i < 4; i++) {
        volatile uint16_t pin = 12 + i;
        volatile uint16_t bit = (number >> i) & 1;
        if (bit) {
            turnOn(pin);
        } else {
            turnOff(pin);
        }
    }
}
