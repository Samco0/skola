#include <stdio.h>
#include <stdlib.h>

void average(int *sum, float *avg){
	int a, b, dividor;
	
	printf("Type your numbers in format of \"a b\": ");
	scanf(" %d %d", &a, &b);
	
	printf("Type your division provider: ");
	scanf(" %d", &dividor);
	
	*sum = a + b;
	*avg = (float)*sum / dividor;
}

int main(){
	//outcomes of average()
	int sum;
	float avg;
	
	average(&sum, &avg);
	
	printf("\nSum of your numbers: %d", sum);
	printf("\nAvg of your numbers: %.02f", avg);
}
