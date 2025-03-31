#include <iostream>

using namespace std;

class Book{
private:
	string name;
	string author;
	int pages;
public:
	Book();
	
	Book(string bookName, string bookAuthor, int bookPages){
		name = bookName;
		author = bookAuthor;
		pages = bookPages;
	}
	
	void printBook(){
		cout << name << " | " << author << " | " << pages << "\n";
	}
	
	bool isLong(){
		if(pages > 300){
			return true;
		}
		else{
			return false;
		}
	}
};

int main(){
	Book b1 = Book("The Metamorphosis", "Franc Kafka", 70);
	
	b1.printBook();
	
	if(b1.isLong() == true){
		cout << "Its a long book";
	}
	else{
		cout << "Its a short book";
	}
}
