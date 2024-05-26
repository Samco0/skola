#include <stdio.h>
#include <stdbool.h>

#define AGE_LIMIT 18
#define DECK_SIZE 20
#define CRIT_HIT(x) x/100*20
#define TAXED(x, y) x*100/y

void underscores(int number){
	int und = 0;
	int x = 0;
	
	if(number <=0){
		und = 10;
	}
	else{
		do{
			number = number/10;
			und = und + 1;
		}while(number>0);
	}
	
	do{
		printf("_ ");
		x = x+1;
	}while(x<und);
}

void pretty_line(int number){
	int stars = 0;
	int x = 0;
	
	if(number < 5){
		stars = 10;
	}
	else{
		stars = number - 4;
	}
	
	printf("\n_=");
	do{
		printf("*");
		x = x+1;
	}while(x<stars);
	printf("=_");
}

void login_check(bool b){
	if(b == true){
		printf("\nLogin was succesful");
	}
	else {
		printf("\nLogin was NOT succesful");
	}
}

int absolute_value(int n){
	if(n < 0){
		n = n * (-1);
	}
	
	return n;
}

int chain_value(int n){
	int x = 0;
	int final_value = 0;
	
	if(n <= 0){
		final_value = -1;
	}
	else {
		do{
			x = x + 1;
			final_value = final_value + x;
		}while(x<n);
	}
	
	return final_value;
}

int smallest_number(int a, int b, int c){
	if(a>b&&a>c){
		return a;
	}
	else if(b>a&&b>c){
		return b;
	}
	else{
		return c;
	}
}

int two_digits(int a){
	float f = (float)a/100;
	int i = a/100;
	float twodigits;
	twodigits = f - (float)i;
	twodigits = twodigits * 100;
	
	int final = twodigits;
	
	return final;
}

bool isTriangle(int a, int b, int c){
	if(a+b>c&&a+c>b&&b+c>a){
		return true;
	}
	else {
		return false;
	}
}

int main(){
	int num1 = 8;
	int num2 = 8;
	int num3 = 4;
	/*bool isLoginSuccesful = true;*/
	
	//void functions
	/*underscores(num1);
	pretty_line(num1);
	login_check(isLoginSuccesful);*/
	
	//int functions
	/*printf("Absolute value of the number %d is %d\n", num1, absolute_value(num1));
	printf("Soucet vsech cisel od 0 do %d je %d\n", num1, chain_value(num1));
	printf("Nejmensi cislo z cisel {%d;%d;%d} je %d", num1, num2, num3, smallest_number(num1, num2, num3));
	printf("Desitky a jednotky z cisla %d jsou %d", num1, two_digits(num1));*/
	
	//bool funtions
	if(isTriangle(num1, num2, num3)==true){
		printf("Creating this triangle is possible");
	}
	else{
		printf("Creating this triangle is impossible");
	}
	
}
