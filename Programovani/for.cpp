#include <iostream>

using namespace std;

int main(){
	for(int i=0;i<=100;i++){
		if(i % 3 == 0 && i % 6 == 0){
			cout << i << ", ";
		}
	}
	
	return 0;
}
