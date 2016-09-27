#ifndef PROGRAM1_2_H
#define PROGRAM1_2_H
#include <iostream>
#include <string>
#include <vector>

class Shelf{
public:
	Shelf();
	~Shelf();
	void increment();
	int getNumber();
	void placeBook(std::string bookName);
	void getShelf();
private:
	std::vector<std::string> bookCase;
	int numOfBooks;
	int maxBooks;
};
#endif
