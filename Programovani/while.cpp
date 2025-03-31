#include <iostream>

using namespace std;

int main(){
	int count = 1;
	
	while(count != 100){
		if(count % 3 == 0&&count % 6 == 0){
			cout << count << ", ";
		}
		
		count++;
	}
	
	return 0;
}
