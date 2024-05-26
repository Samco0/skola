#include <stdio.h>
#include <stdlib.h>

#define N 5

void printa(int array[], int lenght){
	printf("|");
	for(int i=0;i<lenght;i++){
		printf(" %d |", array[i]);
	}
	printf("\n");
}

void bubbleSort(int array[], int lenght){
	int sejf = 0;
	
	for(int i=0;i<lenght;i++){
		for(int i=0;i<(lenght-1);i++){
			if(array[i]>array[i+1]){
				sejf = array[i];
				
				array[i] = array[i+1];
				
				array[i+1] = sejf;
			}
		}
	}
}

 int main(){
	 int cisla[N] = {7,69,2,5,4};
	 
	 printa(cisla, N);
	 
	 bubbleSort(cisla,N);
	 
	 printa(cisla,N);
 }
