#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <windows.h>

#define N 100

/*
  1. delka stringu
  strlen
  
  2. porovnavani stringu
  strcmp
  
  3. kopirovani stringu
  strcpy
  
  4. pro slovo "skibidi" a slovo "toilet" udela v prvnim slove "skibiditoilet"
 */

void slovastesti(){
	char pismenko[1];
	printf("N_GGER");
	printf("\nJake pismenko chybi? -> ");
	gets(pismenko);
	if(strcmp(pismenko,"A")==0||strcmp(pismenko,"a")==0){
		system("color 0A");
		printf("\nSpravne");
	}
	else{
		printf("\nNuh uh");
	}
}

int main(){
	char jmeno[N];
	char prijmeni[N];
	char celeJmeno[N];
	int delkaJmena;
	
	printf("Zadejte vase jmeno -> ");
	gets(jmeno);
	
	printf("Zadejte vase prijmeni -> ");
	gets(prijmeni);
	
	delkaJmena = strlen(jmeno);
	
	printf("Vase jmeno ma %d znaku",delkaJmena);
	
	if(strcmp(jmeno,prijmeni)==0){
		printf("\nMate stejne jmeno i prijmeni");
	}
	else{
		printf("\nNemate stejne jmeno i prijmeni");
	}
	
	strcpy(celeJmeno,jmeno);
	
	strcat(celeJmeno," ");
	strcat(celeJmeno,prijmeni);
	
	printf("\n\nTim padem vase jmeno je %s", celeJmeno);
}
