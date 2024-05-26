#include <stdio.h>
#include <stdlib.h>

#define N 8

/**
 * 
 */


int minimumPossition(int array[], int index, int size){
	int minNum = array[index];
	int minInd = index;
	
	for(int i=index;i<size;i++){
		if(minNum > array[i]){
			minNum = array[i];
			minInd = i;
		}
	}
	
	return minInd;
}

void switchPlaces(int array[], int minPos, int index){
	int sejf;
	
	sejf = array[index];
	array[index] = array[minPos];
	array[minPos] = sejf;
}

void printa(int array[], int lenght){
	printf("|");
	for(int i=0;i<lenght;i++){
		printf(" %d |", array[i]);
	}
	printf("\n");
}

int main(){
	int array[N] = {11,58,16,22,84,100,2,25};
	
	//vypise se mi array PRED serazenim
	printa(array,N);
	
	//zapamatuju si nulty prvek
	int index = 0;
	
	//opakuju dokud se indexem nedostanu na posledn9 prvek
	while(index < N){
		
		//najdu v poli od indexu do konce minimu a jeho pozici
		int minPos = minimumPossition(array, index, N);
		
		//prohodim ho s indexem
		switchPlaces(array, minPos, index);
		
		//posunu index
		index++;
	}
	
	//vyise se mi array PO serazeni	
	printa(array, N);
}
