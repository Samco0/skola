#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>
#include <time.h>

#define N 8

void printa(int array[], int size){
printf("\n|");

for(int i=0;i<size;i++){
	printf(" %d |", array[i]);
}
}

void addOneToArray(int array[], int size){
	for(int i=0;i<size;i++){
		if(array[i]!=9){
			array[i]=array[i]+1;
		}
		else{
			array[i]=0;
		}
	}
}

void moveLeftArray(int array[], int size){
	int storage = array[0];
	
	for(int i=0;i<size;i++){
		array[i]=array[(i+1)];
	}
	
	array[(size-1)] = storage;
}

void randomizeArray(int array[], int size){
	srand(time(NULL));
	int r = 0;
	
	for(int i=0;i<size;i++){
		r = rand() % 10;
		array[i] = r;
	}
}

bool areArraysSame(int array1[], int array2[], int size){
	int numberOfSame = 0;
	
	for(int i=0;i<size;i++){
		if(array1[i]==array2[i]){
			numberOfSame++;
		}
	}
	
	if(numberOfSame==size){
		return true;
	}
	else{
		return false;
	}
}

void copyArray(int array_being_copied[], int array_target[], int size){
	for(int i=0;i<size;i++){
		array_target[i] = array_being_copied[i];
	}
}

void game(int array1[], int array2[], int size){
	int choice = 0;
	
	do{
		printf("POZADOVANY ARRAY");
		printa(array1, size);
		printf("\nVAS ARRAY");
		printa(array2, size);
		
		printf("\nUDELEJTE TAH ABY JSTE JE PRERADIL");
		printf("\n1) posunte array doleva");
		printf("\n2) prictete k arrayi 1\n");
		scanf(" %d", &choice);
		
		switch (choice) {
		case 1:
			moveLeftArray(array2, size);
			break;
		case 2:
			addOneToArray(array2, size);
			break;
		}
		
		system("cls");
	}while(areArraysSame(array1, array2, size)!=true);
	
	printf("Vyhral jsi.");
	printf("\nTreba si to vytiskni a nalep mamce na lednicku at je hrda, nebo tak neco");
}

int main(){
	int r1 = rand() % 5 + 3;
	int r2 = rand() % 5 + 3;
	
	int pozadovany_array[N] = {0,0,0,0,0,0,0,0};
	int uzivateluv_array[N] = {0,0,0,0,0,0,0,0};
	
	randomizeArray(pozadovany_array, N);
	copyArray(pozadovany_array, uzivateluv_array, N);
	//slyšel jsem že pan džejniš rád gamble, tak mu ho tu dám :love_eyes:
	
	for(int i=0;i<=r1;i++){
		moveLeftArray(uzivateluv_array, N);
	}
	
	for(int i=0;i<=r2;i++){
		addOneToArray(uzivateluv_array, N);
	}
	
	game(pozadovany_array, uzivateluv_array, N);
}
