#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 255

//napiste program ktery do pole struktur nacte jednotlive studenty
//u jednotlivych studentu bude uzivatel zadavat jejich cislo, jmeno, prijmeni a vek
//vytvorte nabidku ktera umozni: pridate noveho studenta na konec pole; vypsat vsechny studenty
//udelejte funkci ktera seradi zaky abecedne(vzestupne)
//udelejte funkci ktera seradi zaky podle jejich cisla

typedef struct{
	int cislo;
	char jmeno[N];
	char prijmeni[N];
	int vek;
}Student;

void printStudent(Student s){
	printf("%d|%s %s|%d let",s.cislo, s.prijmeni, s.jmeno, s.vek);
}

//funkce ktera vytvori studenta (tim padem se da pouzit k pridani studenta do arraye fr)
Student pridaniStudenta(){
	Student zak;
	
	printf("Zadejte studentovo cislo: ");
	scanf("%d", &zak.cislo);
	printf("\nZadejte prijmeni zaka: ");
	scanf("%s", &zak.prijmeni);
	printf("\nZadejte jmeno zaka: ");
	scanf("%s", &zak.jmeno);
	printf("\nZadejte studentuv vek: ");
	scanf("%d", &zak.vek);
	
	return zak;
}

//funkce ktera vypise cely seznam studentu
void printStudentArray(Student a[], int size){
	printf("\n");
	for(int i=0;i<size;i++){
		printStudent(a[i]);
		printf("\n");
	}
	printf("\n");
}

//bubblesort ktery seradi studenty podle cisla
void serazeniPodleCisla(Student a[], int size){
	int odklad = 0;
	
	for(int i=0;i<size;i++){
		for(int i=0;i<(size-1);i++){
			if(a[i].cislo>a[i+1].cislo){
				odklad = a[i].cislo;
				
				a[i].cislo = a[i+1].cislo;
				
				a[i+1].cislo = odklad;
			}
		}
	}
}

void serazeniPodlePrijmeni(Student a[], int size){
	char odklad[N];
	
	for(int i=0;i<size;i++){
		for(int i=0;i<(size-1);i++){
			//pokud je x>0 
			if(strcmp(a[i].prijmeni, a[i+1].prijmeni)<0){
				strcpy(odklad,a[i].prijmeni);
				
				strcpy(a[i].prijmeni,a[i+1].prijmeni);
				
				strcpy(a[i+1].prijmeni,odklad);
			}
		}
	}
}

int main(int argc, char** argv) {
	Student studenti[N];
	int lenght = 0;
	int isExit = 0;
	int choice;
	
	do{
		printf("Jaka je vase volba?\n");
		printf("1. Pridat studenta do arraye\n");
		printf("2. Vypsat array studentu\n");
		printf("3. Seradit studenty podle prijmeni\n");
		printf("4. Seradit studenty podle cisla\n");
		printf("5. Exit\n");
		scanf("%d",&choice);
		
		switch (choice) {
		case 1:
			studenti[lenght] = pridaniStudenta();
			lenght++;
			break;
		case 2:
			printStudentArray(studenti,lenght);
			break;
		case 3:
			serazeniPodlePrijmeni(studenti,lenght);
			printf("\n");
			break;
		case 4:
			serazeniPodleCisla(studenti,lenght);
			printf("\n");
			break;
		case 5:
			isExit = 1;
			break;
		default:
			printf("Tohle neni moznost\n");
			break;
		}
	}while(isExit==0);
	
	return 0;
}
