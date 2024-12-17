#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#include "dictionary.h"

//helping function
//makes input string lowercased
void lowercase(char target[]) {
	for (int i = 0; target[i] != '\0'; i++) {
		target[i] = tolower(target[i]);
	}
}

//function num 1
//scans through the .txt until it finds users word (if its english, it outputs cz and the other way around too)
void translate(){
	FILE *f;
	char words[N];
	char separator[] = ";";
	char *outcome = NULL;
	int isFound = 0;
	
	char usersWord[N];
	char en[N];
	char cz[N];
	
	fflush(stdin);
	
	printf("\nType out the word you want to translate: ");
	gets(usersWord);
	
	lowercase(usersWord);
	
	f = fopen(fileName,"r");
	
	if(f == NULL){
		printf("File didn't open");
		return;
	}
	
	//loop that goes through the file
	while (fgets(words, sizeof(words), f) != NULL) {
		outcome = strtok(words, separator);
		
		if(outcome != NULL){
			strcpy(cz, outcome);
			
			outcome = strtok(NULL, separator);
			if(outcome != NULL){
				strcpy(en, outcome);
			}
			
			//types out the translation based on the language user used
			if(strcmp(usersWord, cz) == 0){
				printf("Translation to your word is: %s\n\n", en);
				isFound = 1;
				break;
			}
			else if(strcmp(usersWord, en) == 0){
				printf("Translation to your word is: %s\n\n", cz);
				isFound = 1;
				break;
			}
		}
	}
	
	if(isFound == 0){
		printf("This word is not in the dictionary\n\n");
	}
	
	fclose(f);
}

//function num 2
//takes the number of lection, gets how long the lection is and then asks user to type out the translation
void examFromLection(char lectionNum[]){
	FILE *f = fopen(fileName, "r");
	char words[N];
	char separator[] = ";";
	char *outcome = NULL;
	
	char usersWord[N];
	char en[N];
	char cz[N];
	
	int userPoints = 0;
	int maxPoints = countWords(lectionNum);
	
	fflush(stdin);

	
	if(f == NULL){
		printf("File didn't open");
		return;
	}
	
	//this if is here to skip the loop if the lection is not in the file
	if(countWords(lectionNum) == 0){
		printf("This lection doesnt exist.");
		return;
	}
	
	while (fgets(words, sizeof(words), f) != NULL) {
		outcome = strtok(words, separator);
		if(outcome != NULL){
			strcpy(cz, outcome);
		}
		
		outcome = strtok(NULL, separator);
		if(outcome != NULL){
			strcpy(en, outcome);
		}
		
		outcome = strtok(NULL, separator);
		
		//asks user for the ENGLISH translation to a CZECH word
		if(strcmp(lectionNum,outcome) == 0){
			printf("What is the translation to \"%s\": ", cz);
			gets(usersWord);
			
			lowercase(usersWord);
			
			//if the user answered correctly, the app tells him and adds him a point
			if(strcmp(usersWord,en)==0){
				printf("You're correct!\n\n");
				userPoints = userPoints + 1;
			}
			else{
				printf("You're sadly mistaken!\n\n");
			}
		}
		
		outcome = strtok(NULL, separator);
	}
	
	printf("Your score is %d/%d\n", userPoints, maxPoints);
	printf("You had %.02f%% correct\n\n", ((float)userPoints/maxPoints*100));
	fclose(f);
}

//function num 3
//counts how many words does a lesson/the whole dictionary have
int countWords(char userInp[]){
	FILE *f = fopen(fileName, "r");
	char words[N];
	char separator[] = ";";
	char *outcome = NULL;
	
	if(f == NULL){
		printf("File didn't open");
		return 0;
	}
	
	int count = 0;
	
	while (fgets(words, sizeof(words), f) != NULL) {
		outcome = strtok(words, separator);
		
		while (outcome != NULL) {
			if(strcmp(outcome,userInp)==0){
				count = count + 1;
			}
			else if(strcmp(userInp,"*")==0){
				count = count + 1;
			}
			
			outcome = strtok(NULL, separator);
		}
	}
	
	if(strcmp(userInp,"*")==0){
		count = count / 4;
	}
	return count;
}

//function num 4
//function that appends to the dictionary - used to add words into dictionary
void addWord() {
	FILE *f = fopen(fileName, "r");
	char words[N];
	char separator[] = ";";
	char *outcome = NULL;
	int isFound = 0;
	
	int lection;
	char cz[N];
	char en[N];

	if(f == NULL){
		printf("File didn't open");
		return;
	}
	
	fflush(stdin);
	
	printf("\nType out your cz word: ");
	gets(cz);

	printf("Type out your en word: ");
	gets(en);

	printf("Type out the number of lection: ");
	scanf("%d", &lection);

	//a loop which goes through the .txt and searches if the word isnt already there
	while (fgets(words, sizeof(words), f) != NULL) {
		outcome = strtok(words, separator);
		
		while (outcome != NULL) {
			if (strcmp(outcome, cz) == 0 || strcmp(outcome, en) == 0) {
				isFound = 1;
				break;
			}
			outcome = strtok(NULL, separator);
		}
		
		if (isFound == 1) {
			break;
		}
	}
	
	//if that acts based on whether it had been found in the file or not
	if(isFound == 1){
		printf("This word is already in the dictionary\n\n");
	}
	else{
		f = fopen(fileName,"a");
		fprintf(f, "%s;%s;%d;\n", cz, en, lection);
		printf("Word was added succesfully\n\n");
	}
	
	fclose(f);
}

//function num 5
//function that takes how many words does the user want to take an exam from
void examFromDictionary(int wordCount){
	FILE *f = fopen(fileName, "r");
	char words[N];
	char separator[] = ";";
	char *outcome = NULL;
	
	char usersWord[N];
	char en[N];
	char cz[N];
	
	int userPoints = 0;
	int maxPoints = wordCount;
	
	srand(time(NULL));
	int random = rand() % (countWords("*") + 1);
	
	//counting is used to navigate through the dictionary
	int counting = 0;
	
	//counting how many times we go through the dictionary
	//comparing it to wordCount
	int countLoop = 0;
	
	//we put indexes of the words here, so we can prevent the app asking again the user same word again
	int wordsAsked[N];
	
	//we use this int in the loop that goes through wordsAsked array
	int usedWord;
	
	if(wordCount > countWords("*")){
		wordCount = countWords("*");
	}
	else if(wordCount < 1){
		wordCount = 1;
	}
	
	if(f == NULL){
		printf("File didn't open");
		return;
	}
	
	fflush(stdin);
	
	//loop that goes through the file and asks the user to translate random english words
	while(countLoop != wordCount){
		usedWord = 0;
		
		countLoop = countLoop + 1;
		
		while(usedWord == 0){
			random = rand() % (countWords("*") + 1);
			usedWord = 1;
			
			for (int i = 0; i < countLoop; i++) {
				if (wordsAsked[i] == random) {
					usedWord = 0;
					break;
				}
			}
		}
		
		wordsAsked[countLoop - 1] = random;
		
		
		//rewind puts us back to the beggining of the file
		rewind(f);
		
		counting = 0;
		
		//a loop that goes through the text and based on the random seeks the word
		while (fgets(words, sizeof(words), f) != NULL) {
			counting = counting + 1;
			
			if(counting == random + 1){
				outcome = strtok(words, separator);
				if(outcome != NULL){
					strcpy(cz, outcome);
				}
				
				outcome = strtok(NULL, separator);
				if(outcome != NULL){
					strcpy(en, outcome);
				}
				
				outcome = strtok(NULL, separator);
				
				//asks user for the ENGLISH translation to a CZECH word
				printf("What is the translation to \"%s\": ", cz);
				gets(usersWord);
					
				lowercase(usersWord);
					
				//if the user answered correctly, the app tells him and adds him a point
				if(strcmp(usersWord,en)==0){
					printf("You're correct!\n\n");
					userPoints = userPoints + 1;
				}
				else{
					printf("You're sadly mistaken!\n\n");
				}
				
				break;
			}
		}
	}
	
	printf("Your score is %d/%d\n", userPoints, maxPoints);
	printf("You had %.02f%% correct\n\n", ((float)userPoints/maxPoints*100));
	fclose(f);
}

//function num 6
//function that scans through the text and replaces the line with what the user wants it to be replaced
void editDictionary(){
	FILE *f = fopen(fileName,"r");
	FILE *g = fopen("help.txt", "w");
	char words[N];
	char separator[] = ";";
	char *outcome = NULL;
	
	char usersWord[N];
	char en[N];
	char cz[N];
	char lection[N];
	
	int editType = 0;
	
	printf("Do you want to edit(1) or delete(2)?");
	scanf("%d", &editType);
	printf("\nType out the word: ");
	scanf(" %s", usersWord);
	
	//searching for the word
	
	switch (editType) {
	case 1:
		//copies the whole dictionary, when it finds the line that should be changed, it asks for the words again
		
		while (fgets(words, sizeof(words), f) != NULL) {
			outcome = strtok(words, separator);
			strcpy(cz, outcome);
			
			if(outcome != NULL){
				outcome = strtok(NULL, separator);
				strcpy(en, outcome);
				if(outcome != NULL){
					outcome = strtok(NULL, separator);
					strcpy(lection, outcome);
					
					if(strcmp(usersWord, cz)==0 || strcmp(usersWord, en)==0){
						printf("Type out the czech word: ");
						scanf(" %s", cz);
						
						printf("Type out the english word: ");
						scanf(" %s", en);
						
						printf("Type out the lection number: ");
						scanf(" %s", lection);
					}
					
					fprintf(g, "%s;%s;%s;\n", cz, en, lection);
				}
			}
		}
		
		fclose(f);
		fclose(g);
		
		remove(fileName);
		rename("help.txt", fileName);
		break;
	case 2:
		//copies the whole dictionary excluding the one who should be removed
		
		while (fgets(words, sizeof(words), f) != NULL) {
			outcome = strtok(words, separator);
			strcpy(cz, outcome);
			if(outcome != NULL){
				outcome = strtok(NULL, separator);
				strcpy(en, outcome);
					
				if(outcome != NULL){
					outcome = strtok(NULL, separator);
					strcpy(lection, outcome);
					
					if(strcmp(usersWord, cz)!=0 && strcmp(usersWord, en)!=0){
						fprintf(g, "%s;%s;%s;\n", cz, en, lection);
					}
				}
			}
		}
		
		fclose(f);
		fclose(g);
		
		remove(fileName);
		rename("help.txt", fileName);
		break;
	default:
		printf("\nWrong argument.");
		break;
	}
	
	
	fclose(f);
}
