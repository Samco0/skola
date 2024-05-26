#include <stdio.h>
#include <stdbool.h>
#include "mymath.h"
#define pi 3.14
#define N 5

int main(int argc, char** argv) {
	int studenti[N];
	float prumer = 0;
	
	
	for(int i=0;i<=10;i++){
		prumer = prumer + studenti[i];
	}
	
	prumer = prumer / 10;
	
	printf("Prumer: %.01f", prumer);
	
	return 0;
}
