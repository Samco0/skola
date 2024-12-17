#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dictionary.h"

//funkce 1 3 4 musi byt done

int main(){
	//int, that updates based on the users choice
	int userSw;
	
	//int, which causes the whole app to loop
	int userLoop = 0;
	
	char wordCounting[N];
	char examInt[N];
	
	int dictionaryExamCount;
	
	while(userLoop==0){
		//what user sees
		printf("+===========================================================+\n");
		printf("| 1. Translation                                            |\n");
		printf("| 2. Exam with words from lection                           |\n");
		printf("| 3. Count words in a lection                               |\n");
		printf("| 4. Adding a word into a file                              |\n");
		printf("| 5. Exam with random words from the whole dictionary       |\n");
		printf("| 6. Edit words in dictionary                               |\n");
		printf("| 7. Exit the app                                           |\n");
		printf("+===========================================================+\n\n");
		printf("What do you wish to do? -> ");
		scanf(" %d", &userSw);
		
		switch (userSw) {
		case 1:
			translate();
			break;
		case 2:
			printf("What lection do you want to take an exam from: ");
			scanf("%s", examInt);
			
			examFromLection(examInt);
			
			break;
		case 3:
			printf("\nWhich lesson do you wanna count words in: ");
			scanf("%s", wordCounting);
			
			if(strcmp(wordCounting,"*")==0){
				printf("Dictionary has %d words\n", countWords(wordCounting));
			}
			else{
				printf("This lection has %d words\n", countWords(wordCounting));
			}
			break;
		case 4:
			addWord();
			break;
		case 5:
			printf("How many words do you want to take exam from: ");
			scanf("%d", &dictionaryExamCount);
			
			examFromDictionary(dictionaryExamCount);
			break;
		case 6:
			editDictionary();
			break;
		case 7:
			userLoop = 1;
			break;
		default:
			printf("\n\nThis is not a valid option. Try again.\n");
			break;
		}
	}
	
	
	return 0;
}
