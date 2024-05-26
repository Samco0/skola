#include <stdio.h>
#include <stdbool.h>

#define pi (3.141592654);
#define adultAge 18

int kruhObvod(int r){
	float o;
	
	if(r < 0){
		r = r*(-1);
	}
	
	o = r*pi;
	
	return o;
}

int kruhObsah(int r){
	float S;
	
	if(r < 0){
		r = r*(-1);
	}
	
	S = r*r*pi;
	
	return S;
}

bool isAdult(int age){
	bool a;
	
	if(age >= adultAge){
		a = true;
	}
	else{
		a = false;
	}
	
	return a;
}

int main(){
	int r1,r2,r3;
	int a;
	
	r1 = 5;
	r2 = -12;
	r3 = 47;
	
	printf("Obvod prvniho kruhu (r=%dcm) je %dcm\n", r1, kruhObvod(r1));
	printf("Obvod druheho kruhu (r=%dcm) je %dcm\n", r2, kruhObvod(r2));
	printf("Obvod tretiho kruhu (r=%dcm) je %dcm\n", r3, kruhObvod(r3));
	
	printf("--------------------------------\n");
	
	printf("Obsah prvniho kruhu (r=%dcm) je %dcm\n", r1, kruhObsah(r1));
	printf("Obsah druheho kruhu (r=%dcm) je %dcm\n", r2, kruhObsah(r2));
	printf("Obsah tretiho kruhu (r=%dcm) je %dcm\n", r3, kruhObsah(r3));
	
	printf("--------------------------------\n");
	
	printf("Jaky je vas vek? -> ");
	scanf(" %d", &a);
	
	if(isAdult(a)==true){
		printf("\nJsi plnolety brasko!");
	}
	else{
		printf("\nTak to jsi jeste dite brasko!");
	}
	
	return 0;
}
