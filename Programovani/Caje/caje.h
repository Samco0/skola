#ifndef CAJE_H
#define CAJE_H
#include <stdio.h>
#include <string.h>

#define velikost 100

typedef struct {
	int cislo;
	char nazev[velikost];
	char druh[velikost];
	float cena;
} caje;

caje pridatCaj();
void vypsatCaj(caje novy);
int jeZeleny(caje novy);
void velkePismeno(caje novy);

void ulozDoBin(caje c[], int size);


#endif

