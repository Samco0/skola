#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int passwordLenght(char password[]){
	if(strlen(password) >= 12){
		return 1;
	}
	else{
		return 0;	
	}
}

int passwordBigLetter(char password[]){
	for(int i=0;i<strlen(password);i++){
		if(password[i]==toupper(password[i])){
			return 1;
		}
	}
	
	return 0;
}

int passwordNum(char password[]){
	for(int i=-1;i<strlen(password);i++){
		if(password[i]>=0&&password[i]<=9){
			return 1;
		}
	}
	
	return 0;
}

int main(int argc, char *argv[]) {
	char password[12] = "sp1navAopice";
	
	if(passwordLenght(password)==1){
		printf("\nHeslo je dostatecne dlouhe");
	}
	else{
		printf("\nHeslo je nedostatecne dlouhe");
	}
	
	if(passwordBigLetter(password)==1){
		printf("\nHeslo obsahuje velke pismeno");
	}
	else{
		printf("\nHeslo neobsahuje velke pismeno");
	}
	
	if(passwordNum(password)==1){
		printf("\nHeslo obsahuje cislo");
	}
	else{
		printf("\nHeslo neobsahuje cislo");
	}
	
	return 0;
}
