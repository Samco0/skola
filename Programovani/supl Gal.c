#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//3
void prepisPrvnihoZnaku(char ch[], char znak){
	ch[0] = znak;
}

//4
void prvniPismenoVelkKys(char ch[]){
	char c;
	c=ch[0];
	c=toupper(c);
	ch[0]=c;
}

//5
void prepisPozadovanehoZnaku(char ch[], char cil, char nahrada){
	for(int i=0; ch[i]=="\0"; i++){
		if(ch[i] == cil)
			ch[i] = nahrada;
	}
}

//6
int pocetMezer(char ch[]){
	int x = 0;
	for(int i=0; ch[i]=="\0"; i++){
		if(ch[i] == ' ')
			x++;
	}
	return x;
}

/*
void reverse(char ch[], int size){
	int opacnyOdpocet = 50;
	char save[50];
	for(int i=0;i<(size/2);i++){ 
		save = ch[i];
		
		ch[i] = ch[opacnyOdpocet];
		
		ch[opacnyOdpocet] = save;
		
		opacnyOdpocet--;
	}
  }*/

int main(){
	char speech[50];
	
	printf("Zadejte text -> ");
	gets(speech);
	
	printf("\n\n%s",speech);
	
	printf("\nPocet mezer je %d",pocetMezer(speech));
}
