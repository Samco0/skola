#include<stdio.h>
#include<string.h>

#define N 50

/*
  Vytvo�te program?v?jazyce?C (netvo�te projekt). 
  
  Zad�n�: 
  
  1. Ulo�te do souboru 10 slov��ek (�esk� bez diakritiky nebo anglick�) odd�len�ch ; (st�edn�kem). Neuv�d�jte mezeru mezi slov��ky. 
  
  2. Vypi�te pomoc� funkce strtok() v konzoli slov��ka (ka�d� samostatn�) pod sebou.  
  
  P�ehledn� form�tujte v�pis. 
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
