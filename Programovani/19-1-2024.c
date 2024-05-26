#include<stdio.h>
#include<stdlib.h>

#define Nogger 15

void printfArray(int array[], int size){
	printf("\n|");
	
	for(int i=0;i<size;i++){
		printf(" %d |", array[i]);
	}
}

void scanfArray(int array[], int size){
	for(int i=0;i<size;i++){
		scanf(" %d", &array[i]);
	}
}

int main(){
	int pole[Nogger] = {2,8,4,2,5,4,2,5,4,1,6,4,1,5,2};
	
	printfArray(pole, Nogger);
	printf("\n\n");
	
	scanfArray(pole, Nogger);
	
	printfArray(pole, Nogger);
}
