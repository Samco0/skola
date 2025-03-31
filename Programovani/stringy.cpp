#include <iostream>
#include <string>
using namespace std;

int main(){
	string jmeno, prijmeni;
	int cislo;
	
	cout << "Napiste vase jmeno: ";
	getline(cin, jmeno);
	cout << "Napiste vase prijmeni: ";
	getline(cin, prijmeni);
	
	cout << "\nDelka vaseho jmena: " << jmeno.length();
	cout << "\nDelka vaseho prijmeni: " << prijmeni.length();
	
	if(jmeno.compare(prijmeni) == 0){
		cout << "\n\nVase jmeno a prijmeni se shoduje";
	}
	else{
		cout << "\n\nVase jmeno a prijmeni se neshodujou";
	}
	
	jmeno.insert(2, "AHOJ");
	prijmeni.insert(2, "AHOJ");
	
	cout << "\n\nPridani \"AHOJ\": " << jmeno << " " << prijmeni;
	
	cout << "\n\n\"HO\" je v obou retezcich na " << jmeno.find("HO") << " pozici";
	
	prijmeni.clear();
	
	cout << "\n\nZadejte cislo: ";
	cin >> cislo;
	
	jmeno.insert(jmeno.length(), to_string(cislo));
	cout << "Vas konecny string: " << jmeno;
	
	return 0;
}
