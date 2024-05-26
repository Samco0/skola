#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h> //strlen, strcmp, strcpy
#include <ctype.h> //toupper, tolower
#include <windows.h> //system("cls")

#define N 150

/*
naprogramujte hru OBESENEC
maximum pokusu: 7
je skryty rezec, napr "Deset malych cernousku"



 */


void naPodrzitka(char string_k_promenne[], char predloha[]){
	for(int i=0;i<strlen(predloha);i++){
		if(predloha[i]!=' '){
			string_k_promenne[i] = '_';
		}
		else if(predloha[i]==' '){
			string_k_promenne[i] = ' ';
		}
	}
}

int seekCharacter(char hadanka[], char pismenko){
	int pocetVyskytu = 0;
	pismenko = tolower(pismenko);
	
	
	for(int i=0;i<strlen(hadanka);i++){
		if(hadanka[i]==pismenko){
			pocetVyskytu = pocetVyskytu+1;
		}
	}
	
	if(pocetVyskytu>0){
		return 1;
	}
	else{
		return 0;
	}
}

void rewriteCharIntoStr(char puvod[], char tenDruhy[], char pismenko){
	for(int i=0;i<strlen(puvod);i++){
		if(puvod[i]==pismenko){
			tenDruhy[i] = pismenko;
		}
	}
}

void randomHadanka(char string_k_promenne[]){
	srand(time(NULL));
	int r = rand() % 6;
	
	switch (r) {
	case 0:
		strcpy(string_k_promenne,"zidi byli serifove ");
		break;
	case 1:
		strcpy(string_k_promenne,"janischova kocka je cigan v prestrojeni ");
		break;
	case 2:
		strcpy(string_k_promenne,"cigimir cernisch ");
		break;
	case 3:
		strcpy(string_k_promenne,"afroamericani v parizi ");
		break;
	case 4:
		strcpy(string_k_promenne,"trista tricet tri stribrnych strikacek strikalo pres trista tricet tri stribrnych strech ");
		break;
	case 5:
		strcpy(string_k_promenne,"panda je nejvice rasisticky vyvazene zvire wtf ");
		break;
	default:
		strcpy(string_k_promenne,"skibidi toaleta ");
		break;
	}
}

int main(){
	char hadanka[N];
	randomHadanka(hadanka);
	
	char podtrzitka[N];
	char uhodnutePismena[N];
	char pismeno;
	int pokusy = 7;
	int uhodnutePis = 0;
	
	naPodrzitka(podtrzitka,hadanka);
	
	while(pokusy!=0&&strcmp(hadanka,podtrzitka)!=0){
		printf("%s ",podtrzitka);
		printf("\nPocet zivotu: %d",pokusy);
		printf("\nZadejte pismeno -> ");
		scanf(" %c",&pismeno);
		
		if(seekCharacter(uhodnutePismena,pismeno)==1){
			system("cls");
			printf("tohle pismeno jsi jiz hadal\n\n");
		}
		else{
			system("cls");
			rewriteCharIntoStr(hadanka,podtrzitka,pismeno);
			uhodnutePismena[uhodnutePis] = pismeno;
			
			if(seekCharacter(hadanka,pismeno)==0){
				pokusy = pokusy - 1;
				uhodnutePis = uhodnutePis +1;
			}
		}
	};
	
	if(strcmp(hadanka,podtrzitka)==0){
		system("cls");
		printf("UHADNUL JSI TO!!\n");
		printf("HADANKA BYLA: %s",hadanka);
	}
	else if(pokusy==0){
		system("cls");
		printf("bohuzel trpis skaredou nemoci jmenem autismus a nezvladl jsi uhodnout tuto suprcupr hadanku...\nhadanka byla:%s",hadanka);
	}
	
	return 0;
}
