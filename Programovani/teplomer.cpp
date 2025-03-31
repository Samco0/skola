#include <iostream>

using namespace std;

class Teplomer{
private:
	float aktualniTeplota;
public:
	Teplomer();
	Teplomer(float teplota){
		aktualniTeplota = teplota;
	}
	
	void nastavTeplotu(float novaTeplota){
		aktualniTeplota = novaTeplota;
	}
	
	float prevodNaF(){
		return aktualniTeplota * 1.8 + 32;
	}
	
	void vypisTeplotu(){
		cout << "Aktualni teplota v C: " << aktualniTeplota << endl;
	}
};

int main(){
	Teplomer t1 = Teplomer(23.3);
	
	t1.vypisTeplotu();
	
	t1.nastavTeplotu(20.1);
	
	t1.vypisTeplotu();
	cout << "Aktualni teplota v F: " << t1.prevodNaF();
}
