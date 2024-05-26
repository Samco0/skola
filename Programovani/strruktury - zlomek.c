#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "fraction.h"

void printFrac(Frac z){
	printf("%d/%d",z.numr,z.denr);
}

Frac plusFrac(Frac z1, Frac z2){
	Frac vys;
	
	vys.numr = z1.numr*z2.denr + z2.numr*z1.denr;
	vys.denr = z1.denr*z2.denr;
	
	return vys;
}

Frac minusFrac(Frac z1, Frac z2){
	Frac vys;
	
	vys.numr = z1.numr*z2.denr - z2.numr*z1.denr;
	vys.denr = z1.denr*z2.denr;
	
	return vys;
}

Frac multFrac(Frac z1, Frac z2){
	Frac vys;
	
	vys.numr = z1.numr*z2.numr;
	vys.denr = z1.denr*z2.denr;
	
	return vys;
}

Frac diviFrac(Frac z1, Frac z2){
	Frac vys;
	
	vys.numr = z1.numr*z2.denr;
	vys.denr = z1.denr*z2.numr;
	
	return vys;
}

int desetinne(Frac zlomek){
	float bridok;
	bridok = (float)zlomek.numr/zlomek.denr;
	
	return bridok;
}

int decide(Frac zlomek){
	if(desetinne(zlomek)>0){
		return 1;
	}
	else if(desetinne(zlomek)==0){
		return 0;
	}
	else{
		return -1;
	}
}

int main(){
	Frac zlom1;
	Frac zlom2;
	
	zlom1.numr = 7;
	zlom1.denr = 3;
	
	zlom2.numr = 1;
	zlom2.denr = 4;
	
	printf("Addition: ");
	printFrac(plusFrac(zlom1,zlom2));
	printf("\nSubstraction: ");
	printFrac(minusFrac(zlom1,zlom2));
	printf("\nMultiplication: ");
	printFrac(multFrac(zlom1,zlom2));
	printf("\nDivision: ");
	printFrac(diviFrac(zlom1,zlom2));
}
