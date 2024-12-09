#include <stdio.h>
#include <string.h>
#include "slovicka.h"

int main(int argc, char** argv) {
	int wordcount = countWords();
	
	saveToFile();
	
	printOutFile();
	
	printf("There are %d words in your file", wordcount);
	
	return 0;
}
