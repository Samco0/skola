#include "stm32f4xx.h"
#define LED 13

void setupButton();
void setupLED(volatile uint16_t led);
void wait(volatile uint16_t ms);
void turnOn(volatile uint16_t led);
void turnOff(volatile uint16_t led);

volatile uint16_t i, j;

int main(void){
    setupButton();
    setupLED(LED);
    turnOff(LED);

    while(1){
        if (!(GPIOA->IDR & (1UL << 0))) //this part of code is constantly checking if the button is pushed
        {
            turnOff(LED);
            wait(500);
            turnOn(LED);
        }
        
    }
}

void setupButton() {
    RCC->AHB1ENR |= (1UL << 0);  // GPIOA clock, PA0 pin

    GPIOA->MODER &= ~(3UL << (0 * 2));    // Set PA0 as input
    GPIOA->PUPDR &= ~(3UL << (0 * 2));    
    GPIOA->PUPDR |= (1UL << (0 * 2));     // This part enables the functioning of the button
}

void setupLED(volatile uint16_t led) {
    RCC->AHB1ENR |= (1UL << 4); // GPIOE clock, PE12 pin

    GPIOE->MODER &= ~(3UL << (led * 2));
    GPIOE->MODER |= (1UL << (led * 2));
}

void wait(volatile uint16_t ms){
    for (i = 0;i < ms; i++)
    {
        for (j = 0;i < ms; i++)
        {
            
        }
    }
}

// Turns a LED on
void turnOn(volatile uint16_t led) {
    GPIOE->ODR |= (1 << led);
}

// Turns a LED off
void turnOff(volatile uint16_t led) {
    GPIOE->ODR &= ~(1 << led);
}