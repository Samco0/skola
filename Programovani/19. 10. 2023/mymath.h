#ifndef MYHEADER_H
#define MYHEADER_H

float soucet (float a, float b){
	return a+b;
}

float odecet (float a, float b){
	return a-b;
}

float soucin (float a, float b){
	return a*b;
}

float deleni (float a, float b){
	if(b == 0){
		return 0;
	}
	return a/b;
}

#endif
