#include <iostream>

using namespace std;

class Person{
private:
	string name;
	int age;
public:
	Person();
	
	Person(string newName, int newAge){
		name = newName;
		age = newAge;
	}
	
	void birthday(){
		age++;
	}
	
	void getPerson(){
		cout << "Name of your person is " << name << "and theyre " << age << " years old\n";
	}
};

int main(){
	Person p1 = Person("Krystof", 18);
	
	p1.getPerson();
	
	p1.birthday();
	
	p1.getPerson();
	
	return 0;
}
