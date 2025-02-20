#include <stdio.h>
#include <stdlib.h>

int main(){
	//vytvorim si pointer na ten array
	int *px;
	int size = 3;
	
	//priradim pointeru pamet
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
	
	realloc(px);
	
	//uvolneni pameti
	free(px);
	
	return 0;
}
