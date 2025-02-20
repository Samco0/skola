#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 90

void bmiCount(float *bmi, char *obesity){
	int weight;
	float height;
	
	printf("Type out your weight: ");
	scanf(" %d", &weight);
	
	printf("Type out your height in m: ");
	scanf(" %f", &height);
	
	*bmi = ((float)weight)/(height * 2);
	
	if(weight <= 0 || height <= 0){
		printf("\nBoth height and weight have to be higher than 0");
		printf("\nBMI cannot be done");
	}
	
	if(*bmi < 20){
		strcpy(obesity, "under weight");
	}
	else if (*bmi >= 20 && *bmi < 25){
		strcpy(obesity, "ideal weight");
	}
	else if (*bmi >= 25 && *bmi < 30){
		strcpy(obesity, "slight overweight");
	}
	else if (*bmi >= 30 && *bmi < 40){
		strcpy(obesity, "obesity");
	}
	else {
		strcpy(obesity, "high obesity");
	}
}

int main(){
	float bmi;
	char obesity[N];
	
	bmiCount(&bmi, obesity);
	
	printf("\nYour bmi is: %.02f", bmi);
	printf("\nObesity: %s", obesity);
}
