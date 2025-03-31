#include <iostream>
using namespace std;

int main(){
	float a, b;
	
	cout << "Vypiste prvni cislo: ";
	cin >> a;
	cout << "Vypiste druhe cislo: ";
	cin >> b;
	if(a > b){
		cout << "Rozdil vasich cisel: " << a - b;
	}
	else{
		cout << "Rozdil vasich cisel: " << b - a;
	}
}
