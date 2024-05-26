#include <stdio.h>
#include <stdbool.h>
#define N 6

void printa(float array[], int size){
	for(int i=0;i<size;i++){
		printf("| %.2f ", array[i]);
	}
	printf("\n\n");
}

void multiply_array(float array[], int size, float multiplic){
	for(int i=0;i<size;i++){
		array[i] = array[i]*multiplic;
	}
}

void divide_array(float array[], int size, float dividor){
	for(int i=0;i<size;i++){
		array[i] = array[i]/dividor;
	}
}

float find_tiniest(float array[], int size){
	int malicek = array[0];
	for(int i=0;i<size;i++){
		if(array[i]<malicek){
			malicek = array[i];
		}
	}
	
	return malicek;
}

float find_largest(float array[], int size){
	float obr = array[0];
	for(int i=0;i<size;i++){
		if(array[i]>obr){
			obr = array[i];
		}
	}
	
	return obr;
}

void odecitani_nejmensiho(float array[], int size, float smallest){
	for(int i=0;i<size;i++){
		array[i] = array[i] - smallest;
	}
}

void twenty(float array[], int size){
	for(int i=0;i<size;i++){
		if(array[i]<20){
			array[i] = array[i] + 10;
		}
		else{
			array[i] = array[i] - 10;
		}
	}
}

void reverse(float array[], int size){
	int opacnyOdpocet = 5;
	float save = 0;
	for(int i=0;i<(size/2);i++){
		save = array[i];
		
		array[i] = array[opacnyOdpocet];
		
		array[opacnyOdpocet] = save;
		
		opacnyOdpocet--;
	}
}

float average(float array[], int size){
	float prumer = 0;
	for(int i=0;i<size;i++){
		prumer = prumer + array[i];
	}
	
	return prumer/size;
}

void add_to_array(float array[], int size, float number){
	for(int i=0;i<size;i++){
		array[i] = array[i]+number;
	}
}

int main(){
	float mojePole[N]={2.5,  4.1, 3.9, 8.2, 6.3, 7.2};
	
	printa(mojePole, N);
	
	/*11
	multiply_array(mojePole, N, 4);
	printa(mojePole, N);
	
	12
	divide_array(mojePole, N, 2);
	printa(mojePole, N);
	
	13
	odecitani_nejmensiho(mojePole, N, find_tiniest(mojePole, N));
	printa(mojePole, N);
	
	14
	twenty(mojePole, N);
	printa(mojePole, N);
	
	15
	reverse(mojePole, N);
	printa(mojePole, N);
	
	16
	add_to_array(mojePole, N, average(mojePole, N));
	printa(mojePole, N);*/
	
	divide_array(mojePole, N, 5);
	printa(mojePole, N);
	
	printf("Nejvetsi cislo z meho pole je: %.02f\n", find_largest(mojePole, N));
	
	printf("Prumer vsech prvku v poli je: %.02f\n\n", average(mojePole, N));
	
	divide_array(mojePole, N, find_largest(mojePole, N));
	printa(mojePole, N);
}
