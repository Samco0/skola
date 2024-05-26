#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define N 5

void border(int a){
	printf("\n-------<UKOL %d>--------\n",a);
}

void borderEmpty(){
	printf("------------------------\n");
}

void printa(int a[]){
	for(int i=0;i<N;i++){
		printf("%d\n", a[i]);
	}
}

int main(int argc, char** argv){
	int numbers[N];
	srand(time(NULL));
	
	/*ukol 1
	border(1);
	
	printa(numbers);*/
	
	
	/*ukol 2
	border(2);
	
	for(int i=0;i<=5;i++){
		if((i%2)==0)printf("%d\n", numbers[i]);
	}*/
	
	
	/*ukol 3
	border(3);
	
	printa(numbers);*/
	
	
	/*ukol 4
	border(4);
	
	for(int i=0;i<N;i++){
		scanf(" %d", &numbers[i]);
	}
	
	borderEmpty();
	
	printa(numbers);*/
	
	
	/*ukol 5
	border(5);
	
	for(int i=0;i<=N;i++){
		numbers[i]=1;
	}
	
	printa(numbers);
	*/
	
	//ukol 6
	border(6);
	
	for(int i=0;i<=N;i++){
		numbers[i] = rand() % 10;
	}
	
	printa(numbers);
	
	
	//ukol 7
	border(7);
	
	int soucet=0;
	for(int i=0;i<=N;i++){
		soucet += numbers[i];
	}
	
	printf("Soucet vsech cisel je %d\n", soucet);
	
	//ukol 8
	border(8);
	
	float prumer=0;
	prumer = (float)soucet / N;
	
	printf("Prumer vsech cisel je %0.1f\n", prumer);
	
	//ukol 9
	border(9);
	
	int high=numbers[0];
	
	for(int i=0;i<=N;i++){
		if(high<numbers[i]){
			high = numbers[i];
		}
	}
	
	printf("Nejvetsi cislo z arraylistu je %d", high);
}
