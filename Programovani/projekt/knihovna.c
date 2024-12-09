#include "knihovna.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int arr[], int size){
	for(int i=0;i<size;i++){
		printf("%d  ", arr[i]);
	}
}

int addNumber(int arr[], int size){
	int cislo;
	
	printf("Zadejte vase cislo: ");
	scanf("%d", &cislo);
	
	arr[size] = cislo;
	size = size + 1;
	
	return size;
}

int generateRandom(){
	int num = rand() % 21 - 10;
	
	return num;
}

int addRandomNumber(int arr[], int size){
	arr[size] = generateRandom();
 
	return size+1;
}

int avgOfArray(int arr[], int size){
	
	int average = 0;
	
	
	for(int i=0;i<size;i++){
		average = average + arr[i];
	}
	
	average = average / (size + 1);
	
	return average;
}

void sortArray(int arr[], int size){
	int sejf = 0;
	
	for(int i=0;i<size;i++){
		for(int i=0;i<(size-1);i++){
			if(arr[i]>arr[i+1]){
				sejf = arr[i];
				
				arr[i] = arr[i+1];
				
				arr[i+1] = sejf;
			}
		}
	}
}

void arrayIntoFile(int arr[], int size){
	FILE *f;
	
	do{
		f = fopen("cisla.txt", "w");
	}while(f==NULL);
	
	for(int i=0;i<size;i++){
		fprintf(f,"%d  ", arr[i]);
	}
	
	fclose(f);
}

int searchArray(int arr[], int size, int wantedNum){
	int tiny = 0;
	
	for(int i=0;i<size;i++){
		if(arr[i] == wantedNum){
			tiny = 1;
		}
	}
	
	return tiny;
}

int countNegative(int arr[], int size){
	int count = 0;
	
	for(int i=0;i<size;i++){
		if(arr[i] < 0){
			count = count + 1;
		}
	}
	
	return count;
}

int countEven(int arr[], int size){
	int count = 0;
	
	for(int i=0;i<size;i++){
		if(arr[i] % 2 == 0 && arr[i] != 0){
			count = count + 1;
		}
	}
	
	return count;
}
