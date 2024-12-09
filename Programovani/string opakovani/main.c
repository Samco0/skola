#include <stdio.h>
#include <ctype.h>

#include "retezec.h"

#define N 255

/*
-1: Zjistí délku řetězce. 
-2: Převede malá v řetězci písmena na velká. 
-3: Převede velká v řetězci písmena na malá. 
-4: Převede velká písmena v řetězci na malá, přičemž první a poslední písmeno bude velké. Např.: původní slovo AHOJ převede na AhoJ 
-5: Zjistí počet mezer v řetězci. 
-6: Zjistí počet číslic v řetězci.
-7: Nahradí všechny mezery v řetězci podtržítkem (znak '_'). 
-8: Nahradí všechna malá i velká písmena 'a' v řetězci znakem '*'. 
-9: Vypíše zadaný řetězec pozpátku. 
*10: Odstraní z řetězce zadaný znak. 
*/

int main(int argc, char** argv) {
	char string[N] = "TRINEEEEEEEEEEEEEEEEEEEEEEC";
	int lenlen = lenghtString(string);
	int loop = 0;
	int option;
	
	while(loop == 0){
		printf("Your array: %s", string);
		printf("\n\nWhat do you wish to do?");
		printf("\n1. Get lenght of array");
		printf("\n2. Make all characters uppercase");
		printf("\n3. Make all characters lowercase");
		printf("\n4. Make all characters lowercase except the first and last");
		printf("\n5. Get how many spaces are in array");
		printf("\n6. Get how many numbers are in array");
		printf("\n7. Change all spaces to underscore");
		printf("\n8. Change all a/A's to *");
		printf("\n9. Type array backwards");
		printf("\n10. Remove a character");
		printf("\n11. Exit");
		printf("\n\nYour option -> ");
		
		scanf("%d",  &option);
		switch (option) {
		case 1:
			printf("\nYour array is %d characters long\n\n", lenlen);
			break;
		case 2:
			toupperString(string, lenlen);
			break;
		case 3:
			tolowerString(string, lenlen);
			break;
		case 4:
			thirdFunc(string, lenlen);
			break;
		case 5:
			printf("\nThere are %d spaces in your array\n\n", countSpace(string, lenlen));
			break;
		case 6:
			printf("\nThere are %d numbers in your array\n\n", countNumbers(string, lenlen));
			break;
		case 7:
			replaceSpace(string, lenlen);
			break;
		case 8:
			replaceA(string, lenlen);
			break;
		case 9:
			printBackwards(string, lenlen);
			break;
		case 10:
			removeChar(string, lenlen);
			break;
		case 11:
			loop = 1;
			break;
		default:
			break;
		}
	}
	return 0;
}
