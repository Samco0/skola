#include <stdio.h>
#include <string.h>
#include "slovicka.h"

void saveToFile(){
	FILE *f;
	int wordCount = 0;
	char word[N];
	
	f = fopen("slovicka.txt","w");
	
	while(wordCount < 3){
		printf("%d. slovo: ", (wordCount+1));
		
		gets(word);
		if(seekWord(word) == 0){
			fprintf(f, "%s;", word);
			wordCount++;
		}
		else{
			printf("Word is already in there");
		}
		
	}
	
	fclose(f);
};

int seekWord(char word[]){
	FILE *f;
	char text[N];
	char *finale = NULL;
	
	int isFound = 0;
	
	f = fopen("slovicka.txt", "r");
	
	fscanf(f, " %s", text);
	finale = strtok(text, ";");
	
	while(finale != NULL || isFound==1){
		if(strcmp(finale,word)==0){
			isFound = 1;
		}
		finale = strtok(NULL, ";");
	}
	
	fclose(f);
	
	return isFound;
}

void printOutFile(){
	FILE *f;
	char text[N];
	char separator[] = ";";
	char *finale = NULL;
	
	f = fopen("slovicka.txt", "r");
	
	fscanf(f, " %s", text);
	finale = strtok(text, separator);
	
	while(finale != NULL){
		printf("%s\n", finale);
		finale = strtok(NULL, separator);
	}
	
	fclose(f);
}

int countWords(){
	FILE *f;
	int numberOfWords = 0;
	
	char text[N];
	char *finale = NULL;
	
	f = fopen("slovicka.txt", "r");
	
	fscanf(f, " %s", text);
	finale = strtok(text, ";");
	
	while(finale != NULL){
		numberOfWords++;
		finale = strtok(NULL, ";");
	}
	
	fclose(f);
	
	return numberOfWords;
}

