#include <iostream>

using namespace std;

class Student{
private:
	string firstName;
	string lastName;
	int age;
	float avgGrade;
public: 
	Student();
	
	Student(string name, string surname, int a, float avg){
		firstName = name;
		lastName = surname;
		age = a;
		avgGrade = avg;
	}
	
	void changeAvg(int newGrade){
		avgGrade = (avgGrade + (float)newGrade)/2;
	}
	
	void printStudent(){
		cout << "   First name: " << firstName << "\n";
		cout << "    Last name: " << lastName << "\n";
		cout << "          Age: " << age << "\n";
		cout << "Average grade: " << avgGrade << "\n\n";
	}
};

int main(){
	Student s1 = Student("Krystof","Zelx", 18, 1.32);
	s1.printStudent();
	s1.changeAvg(5);
	s1.printStudent();
	
	return 0;
}
