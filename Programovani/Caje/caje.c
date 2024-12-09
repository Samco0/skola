#include <stdio.h>
#include "caje.h"
#include <string.h>
#include <windows.h>

caje pridatCaj(){
	caje novy;
	
	printf("Zadejte cislo caje: ");
	scanf(" %d", &novy.cislo);
	fflush(stdin);
	printf("\nZadejte jmeno caje: ");
	gets(novy.nazev);
	
	printf("\nZadejte druh caje: ");
	gets(novy.druh);
	
	printf("\nZadejte cenu caje: ");
	scanf(" %f", &novy.cena);
	
	system("cls");
	
	return novy;
}

void vypsatCaj(caje novy){
	printf("\n\nCaj cislo %d: %s | %s | %.02f,-", novy.cislo, novy.nazev, novy.druh, novy.cena);
}

int jeZeleny(caje novy){
	char bumbac[6] = "zeleny";
	int is = 0;
	
	for(int i=0;i<6;i++){
		for(int j=i;j<=i;j++){
			if(novy.druh[i]==bumbac[j]){
				is = 1;
			}
			else is = 0;
		}
	}
	
	return is;
}

void velkePismeno(caje novy){
	
	char prvniPis = novy.nazev[0];
	
	if(prvniPis>='a' && prvniPis<='z'){
		novy.nazev[0] = prvniPis-32;
	}
}

void ulozDoBin(caje c[], int size){
	FILE *f;
	f = fopen("caje.bin", "wb");
	
	for(int i=0;i<size;i++){
		fwrite(&c[i], sizeof(caje), 1, f);
	}
	
	fclose(f);
}

void seradCaje(caje c[], int size){
	caje zaloha;
	for(int i=0;i<=0;i++){
		zaloha = c[i];
		
		strcmp(c[i].nazev[0], c[i+1].nazev[0]);
	}
}


