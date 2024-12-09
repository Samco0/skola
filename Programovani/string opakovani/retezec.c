#include <stdio.h>
#include <ctype.h>

int lenghtString(char s[]){
	int len = 0;
	
	for(int i=0;s[i] != '\0';i++){
		len = len + 1;
	}
	
	return len;
}

void toupperString(char s[], int lenght){
	for(int i=0;i<lenght;i++){
		if(s[i] >= 97 && s[i] <= 122){
			s[i] = s[i]-32;
		}
	}
}

void tolowerString(char s[], int lenght){
	for(int i=0;i<lenght;i++){
		if(s[i] >= 65 && s[i] <= 90){
			s[i] = s[i]+32;
		}
	}
}

void thirdFunc(char s[], int lenght){
	for(int i=0;i<lenght;i++){
		if(i==0 || i==(lenght-1)){
			if(s[i] >= 97 && s[i] <= 122){
				s[i] = s[i]-32;
			}
		}
		else{
			if(s[i] >= 65 && s[i] <= 90){
				s[i] = s[i]+32;
			}
		}
	}
}

int countSpace(char s[], int lenght){
	int count = 0;
	
	for(int i=0;i<lenght;i++){
		if(s[i]==' '){
			count = count + 1;
		}
	}
	
	return count;
}

int countNumbers(char s[], int lenght){
	int count = 0;
	
	for(int i=0;i<lenght;i++){
		if(s[i]>=48 && s[i]<=57){
			count = count + 1;
		}
	}
	
	return count;
}

void replaceSpace(char s[], int lenght){
	for(int i=0;i<lenght;i++){
		if(s[i] == ' '){
			s[i] = '_';
		}
	}
}

void replaceA(char s[], int lenght){
	for(int i=0;i<lenght;i++){
		if(s[i] == 'a' || s[i] == 'A'){
			s[i] = '*';
		}
	}
}

void printBackwards(char s[], int lenght){
	char c;
	
	printf("\n\n");
	for(int i=lenght;i>=0;i--){
		c = s[i];
		printf("%c", c);
	}
	printf("\n\n");
}

void removeChar(char s[], int length) {
	char ch;
	
	printf("\n\nWhich character do you wish to remove? ");
	scanf(" %c", &ch);
	
	for(int i = 0; i < length; i++) {
		if(s[i] == ch) {
			for(int j = i; j < length - 1; j++) {
				s[j] = s[j + 1];
			}
			s[length - 1] = '\0';
			length = length -1;
			i = i - 1;
		}
	}
}
