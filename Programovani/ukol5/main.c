#include <stdio.h>
#include <string.h>
#include "array.h"

int main(int argc, char** argv) {
	char fileName[N];
	char firstName[N];
	char lastName[N];
	
	printf("What is the name of you file? ");
	fgets(fileName, N, stdin);
	fileName[strlen(fileName)-1]='\0';
	
	printf("First name? ");
	fgets(firstName, N, stdin);
	firstName[strlen(firstName)-1]='\0';
	
	printf("Last name? ");
	fgets(lastName, N, stdin);
	lastName[strlen(lastName)-1]='\0';
	
	//personToFile(fileName, firstName, lastName);
	
	printFromFile(fileName);
	
	printf("\n\nJmeno Sileny Vlk se v souboru nachazi %d krat", countFromFile(fileName, "Sileny", "Vlk"));
	return 0;
}
