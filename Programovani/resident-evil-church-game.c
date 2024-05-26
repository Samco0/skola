#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define N 7

void print_but_cooler(int array[], int size){
	printf("     LIGHT THEM ALL UP\n\n");
	
	printf("|");
	
	for(int i=1;i<=size;i++){
		printf(" %d |", i);
	}
	
	printf("\n|");
	
	for(int i=0;i<size;i++){
		if(array[i]==0){
			printf("   |");
		}
		else{
			printf(" ~ |");
		}
	}
}

void change_of_hodnotka(int array[], int size, int position){
	int position_behind = 0;
	int position_infront = 0;
	
	if(position>=0&&position<size){
		position_infront = position + 1;
		position_behind = position - 1;
		
		if(position==0){
			position_behind = size - 1;
		}
		else if(position==(size - 1)){
			position_infront = 0;
		}
		
		if(array[position]==0){
			array[position] = 1;
		}
		else{
			array[position] = 0;
		}
		
		if(array[position_infront]==0){
			array[position_infront] = 1;
		}
		else{
			array[position_infront] = 0;
		}
		
		if(array[position_behind]==0){
			array[position_behind] = 1;
		}
		else{
			array[position_behind] = 0;
		}
	}
}

int count_ones(int array[], int size){
	int final_count = 0;
	for(int i=0;i<size;i++){
		if(array[i]==1){
			final_count = final_count + 1;
		}
	}
	return final_count;
}

void game_itself(int array[], int size){
	int p = 0;
	
	print_but_cooler(array, size);
	do{
		printf("\n");
		scanf("%d", &p);
		system("cls");
		change_of_hodnotka(array, size, (p-1));
		print_but_cooler(array, size);
	}while(count_ones(array, size)!=size);
}

int main(){
	int lights[N]={0,1,1,0,1,0,1};
	
	system("color 0C");
		
	game_itself(lights, N);
}
