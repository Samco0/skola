#include <iostream>
using namespace std;

int main(){
	int metry, loop = 1;
	
	while(loop != 0){
		cout << "Zadejte hodnotu v metrech: ";
		cin >> metry;
		cout << metry << " metru je " << metry * 100 << " centimetru";
		cout << "\nChcete pokracovat? (0 - ukonceni): ";
		cin >> loop;
		cout << "\n\n\n";
	}
}
