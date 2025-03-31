#include <iostream>

using namespace std;
class Obdelnik{
private:
	int a;
	int b;
public:
	Obdelnik();
	
	Obdelnik(int x,int y){
		a = x;
		b = y;
	}
	
	int vypocitejObvod(){
		return (2*a) + (2*b);
	}
	
	int vypocitejObsah(){
		return a*b;
	}
	
	void zvetsit(int nasobek){
		a = a * nasobek;
		b = b * nasobek;
	}
	
	bool jeCtverec(){
		if(a == b){
			return true;
		}
		else{
			return false;
		}
	}
	
	void vypisObdelnik(){
		cout << "a = " << a << "cm | b = " << b << "cm \n";
	}
};

int main(){
	Obdelnik ob = Obdelnik(7, 12);
	
	ob.vypisObdelnik();
	cout << "o = " << ob.vypocitejObvod() << "cm | S = " << ob.vypocitejObsah() << "cm^2\n";
	
	if(ob.jeCtverec() == true){
		cout << "Jedna se o ctverec\n";
	}
	else{
		cout << "Jedna se o obdelnik\n";
	}
	
	ob.zvetsit(3);
	ob.vypisObdelnik();
	
	return 0;
}
