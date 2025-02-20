#include <stdio.h>
#include <stdlib.h>

void swap(int *x,int *y){
	int safe;
	
	safe = *x;
	*x = *y;
	*y = safe;
}

int main(){
	int a, b;
	
	a = 23;
	b = 91;

	printf("=========\n|%d | %d|\n", a, b);
	swap(&a, &b);
	printf("|%d | %d|\n=========", a, b);
}
