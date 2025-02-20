#include <stdio.h>
#include <stdlib.h>

int main(){
	//vytvorim si pointer na ten array
	int *px;
	int size;
	
	//priradim pointeru pamet podle pozadavku uzivatele
	printf("Napiste velikost arraye: ");
	scanf(" %d", &size);
	printf("\n");
	
	px = (int*)malloc(size * sizeof(int));
	
	//postupne prirazuji cisla do pole
	for(int i=0;i<size;i++){
		printf("Napiste cislo s id %d: ", i);
		scanf(" %d", (px+i));
	}
	
	//postupne vypisuji cisla do pole
	printf("\nVypis vaseho pole: ");
	for(int i=0;i<size;i++){
		printf("%d ", *(px+i));
	}
	
	//uvolneni pameti
	free(px);
	
	return 0;
}
