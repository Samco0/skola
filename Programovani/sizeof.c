#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Size of char: %d byte\n", sizeof(char));
	printf("Size of int: %d bytes\n", sizeof(int));
	printf("Size of float: %d bytes\n", sizeof(float));
	printf("Size of long: %d bytes\n", sizeof(long));
	printf("Size of double: %d bytes\n", sizeof(double));
	printf("Size of array[50]: %d bytes\n", sizeof(int[50]));
}
