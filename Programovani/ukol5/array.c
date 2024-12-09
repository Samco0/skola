#include <stdio.h>
#include <string.h>
#include "array.h"

//function that takes input (full name) and inputs it into user file
void personToFile(char nameOfFile[N], char firstName[], char lastName[]){
	FILE *f;
	
	f = fopen(nameOfFile,"a");
	if(f == NULL){
		perror("\nFile failed to open");
		return;
	}
	
	fprintf(f, "%s %s\n", firstName, lastName);
	
	if(fclose(f) == EOF){
		perror("\nFile failed to close");
		return;
	}
}

//function that prints out all people that are in the file into console
void printFromFile(char nameOfFile[N]){
	FILE *f;
	char first[N];
	char last[N];
	
	int countNames = 0;
	
	f = fopen(nameOfFile,"r");
	if(f == NULL){
		perror("\nFile failed to open");
	}
	
	while(fscanf(f, "%s %s", first, last) == 2){
		countNames = countNames + 1;
		printf("\n%s %s", first, last);
	}
	printf("\n\nThere are %d people in your file.", countNames);
	
	if(fclose(f) == EOF){
		perror("\nFile failed to close");
	}
}

//function that counts people with the same name
int countFromFile(char nameOfFile[N], char firstName[], char lastName[]){
	FILE *f;
	char first[N];
	char last[N];
	int countNames = 0;
	
	f = fopen(nameOfFile,"r");
	if(f == NULL){
		perror("\nFile failed to open");
	}
	
	while (fscanf(f, "%s %s", first, last) == 2) {
		if (strcmp(firstName, first) == 0 && strcmp(lastName, last) == 0) {
			countNames++;
		}
	}
	
	if(fclose(f) == EOF){
		perror("\nFile failed to close");
	}
	
	return countNames;
}
