#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#define N 4
#define num 6

bool find_zero(float array[], int size){
	bool isZero = false;
	for(int i=0;i<size;i++){
		if(array[i]==0){
			isZero = true;
		}
	}
	return isZero;
}

bool find_x(float array[], int size, float x){
	bool isX = false;
	for(int i=0;i<size;i++){
		if(array[i]==x){
			isX = true;
		}
	}
	return isX;
}

int position_biggest(float array[], int size){
	float x = array[0];
	int position = 0;
	for(int i=0;i<size;i++){
		if(array[i]>x){
			x = array[i];
			position = i;
		}
	}
	return position;
}

float product(float array[], int size){
	float x=1;
	for(int i=0;i<size;i++){
		x = x * array[i];
	}
	return x;
}

float biggest(float array[], int size){
	float x = array[0];
	for(int i=0;i<size;i++){
		if(array[i]>x){
			x = array[i];
		}
	}
	return x;
}

void array_calm(float array[], int size){
	for(int i=0;i<size;i++){
		if(array[i]<0){
			array[i] = array[i] * (-1);
		}
	}
}

void array_input(float array[], int size){
	for(int i=0;i<size;i++){
		array[i]=0;
		scanf("%f", &array[i]);
	}
	printf("\n");
}

void array_random(float array[], int size){
	srand(time(NULL));
	float random;
	for(int i=0;i<size;i++){
		random = rand() % 10;
		array[i] = random;
	}
}

void janischova_metoda(float array[], int size){
	array_calm(array, size);
	
	for(int i=0;i<size;i++){
		array[i] = array[i]/biggest(array, size);
	}
}

void printa(float array[], int size){
	printf("|");
	for(int i=0;i<size;i++){
		printf(" %.01f |", array[i]);
	}
	printf("\n\n");
}

int main(int argc, char** argv){
	float numbers[N] = {4,8,5,6};
	
	printa(numbers,N);
	
	array_random(numbers,N);
	printa(numbers,N);
	
	array_input(numbers,N);
	printa(numbers,N);
	
	printf("Soucin vsech cisel je %.01f\n\n",product(numbers,N));
	printf("Nejvyssi cislo z pole je %.01f\n\n",biggest(numbers,N));
	printf("Pozice nejvetsiho cisla je %d\n\n",position_biggest(numbers,N));
	
	array_calm(numbers,N);
	printa(numbers,N);
	
	janischova_metoda(numbers,N);
	printa(numbers,N);
	
	if(find_zero(numbers,N)==true){
		printf("Pole obsahuje 0\n\n");
	}
	else{
		printf("Pole neobsahuje 0\n\n");
	}
	
	if(find_x(numbers,N,num)==true){
		printf("Pole obsahuje %d\n\n",num);
	}
	else{
		printf("Pole neobsahuje %d\n\n",num);
	}
}
