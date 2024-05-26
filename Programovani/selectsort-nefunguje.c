#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 5

void printa(int array[], int lenght){
	printf("|");
	for(int i=0;i<lenght;i++){
		printf(" %d |", array[i]);
	}
}

int minimumPossition(int array[], int length, int start){
	int index = 0;
	int minimum = array[start];
	
	for(int i=0;i<(length-start);i++){
		if(minimum > array[i]){
			minimum = array[i];
			index = i+start;
		}
	}
	
	return index;
}

void selectSort(int array[], int length){
	int blbecek = 0;
	int malicky = 0;
	
	for(int i=0;i<length;i++){
		malicky = minimumPossition(array, length, i);
		
		blbecek = array[i];
		
		array[i] = array[malicky];
		
		array[malicky] = blbecek;
	}
}

int main(int argc, char** argv){
	int array[N] = {7,2,4,25,8};
	
	printa(array, N);
	
	printf("\n%d",minimumPossition(array, N, 1));
	
	return 0;
}
