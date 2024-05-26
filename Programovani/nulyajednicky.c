#include <stdio.h>
#include <stdlib.h>

#define n 7

void fscanfArray(FILE *f, int array[], int size){
	int temp;
	int i = 0;
	while(fscanf(f, "%d", &temp)!=EOF||i<=(size-1)){
		array[i]=temp;
		i++;
	}
}

void printfArray(int array[], int size){
	for(int i=0;i<size;i++){
		if(array[i]==0){
			printf("X");
		}
		else{
			printf("_");
		}
	}
	
	printf("\n");
}

int main(int argc, char *argv[]) {
	int array[n] = {0,0,0,0,0,0,0};
	FILE *f;
	
	f = fopen("nulyajednicky.txt", "r");
	
	fscanfArray(f, array, n);
	
	printfArray(array, n);
}
