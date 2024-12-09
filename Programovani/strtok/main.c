#include<stdio.h>
#include<string.h>

#define N 50

/*
  Vytvoøte program?v?jazyce?C (netvoøte projekt). 
  
  Zadání: 
  
  1. Uložte do souboru 10 slovíèek (èeská bez diakritiky nebo anglická) oddìlených ; (støedníkem). Neuvádìjte mezeru mezi slovíèky. 
  
  2. Vypište pomocí funkce strtok() v konzoli slovíèka (každé samostatnì) pod sebou.  
  
  Pøehlednì formátujte výpis. 
 */

int main(){
	FILE *f;
	char slovicka[N];
	char separator[] = ";";
	char *vysledek = NULL;
	
	f = fopen("slovicka.txt","r");
	
	fscanf(f," %s", slovicka);
	
	vysledek = strtok(slovicka, separator);
	
	while(vysledek != NULL){
		printf("%s\n", vysledek);
		vysledek = strtok(NULL, separator);
	}
	
	fclose(f);
	return 0;
}
