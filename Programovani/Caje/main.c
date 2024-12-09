#include <stdio.h>
#include "caje.h"


int main(int argc, char** argv) {
	caje caj1, caj2, caj3;
	
	caje cajicky[] = {caj1, caj2, caj3};
	
	int delkaCaju = sizeof(cajicky)/sizeof(cajicky[0]);
	
	caj1 = pridatCaj();
	caj2 = pridatCaj();
	caj3 = pridatCaj();
	
	vypsatCaj(caj1);
	vypsatCaj(caj2);
	vypsatCaj(caj3);
	
	ulozDoBin(cajicky,delkaCaju);
	
	return 0;
}
