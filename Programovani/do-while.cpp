#include <iostream>

using namespace std;

int main(){
	int count = 1;
	
	do{
		if(count % 3 == 0&&count % 6 == 0){
			cout << count << ", ";
		}
		
		count++;
	}while(count != 100);
	
	return 0;
}
