#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//include vlastni knihovny
#include "knihovna.h"

/*
Opakování:
Použijte projekt v jazyce C. 
Funkce pro práci s polem čísel:
-- funkce přidá do pole jedno číslo (na konec pole), číslo zadá uživatel z klávesnice
-- funkce přidá do pole náhodné číslo, číslo bude z intervalu <-10,10>
-- funkce vypíše všechny hodnoty z pole 
-- funkce vypočítá průměr čísel
-- funkce seřadí hodnoty v poli vzestupně
-- funkce uloží čísla z pole do textového souboru
-- funkce určí, zda se daná hodnota v poli nachází/nenachází
-- funkce určí počet záporných čísel v poli
-- funkce určí počet sudých čísel v poli
Pro použití funkcí vytvořte vhodnou uživatelskou nabídku.
*/

/*
Použijte projekt v jazyce C.
Funkce pro práci s řetězcem:

1: Zjistí délku řetězce. 
2: Převede malá v řetězci písmena na velká. 
3: Převede velká v řetězci písmena na malá. 
4: Převede velká písmena v řetězci na malá, přičemž první a poslední písmeno bude velké. Např.: původní slovo AHOJ převede na AhoJ 
5: Zjistí počet mezer v řetězci. 
6: Zjistí počet číslic v řetězci.
7: Nahradí všechny mezery v řetězci podtržítkem (znak '_'). 
8: Nahradí všechna malá i velká písmena 'a' v řetězci znakem '*'. 
9: Vypíše zadaný řetězec pozpátku. 
*10: Odstraní z řetězce zadaný znak. 

Pro použití funkcí vytvořte vhodnou uživatelskou nabídku.
Proveďte ošetření případných chybových stavů programu.
*/

int main(int argc, char** argv) {
	int pole[N];
	int size = 0;
	
	int hledaneCislo = 0;
	
	srand(time(NULL));
	
	size = addRandomNumber(pole, size);
	size = addRandomNumber(pole, size);
	size = addRandomNumber(pole, size);
	size = addRandomNumber(pole, size);
	size = addRandomNumber(pole, size);
	
	printArray(pole, size);
	
	printf("\n\nPrumer techto cisel je %d\n\n", avgOfArray(pole, size));
	
	sortArray(pole,size);
	
	printArray(pole,size);
	
	arrayIntoFile(pole,size);
	
	if(searchArray(pole,size,hledaneCislo)==1){
		printf("\n\nCislo %d se v arrayi nachazi",hledaneCislo);
	}
	else{
		printf("\n\nCislo %d se v arrayi nenachazi",hledaneCislo);
	}
	
	printf("\n\nPocet negativnich cisel je %d", countNegative(pole, size));
	
	printf("\n\nPocet sudych cisel je %d", countEven(pole,size));
	return 0;
}
