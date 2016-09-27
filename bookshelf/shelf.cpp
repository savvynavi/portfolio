#include "shelf.h"
using namespace std;

//constructor
Shelf::Shelf(){
    numOfBooks = 0;
    maxBooks = 10;
}

//destructor
Shelf::~Shelf(){
}

//takes the book entered, places it on the shelf up to 10, then no more will fit on the shelf
void Shelf::placeBook(string bookName){
	if(numOfBooks == maxBooks){
		cout << "The shelf is full, can't place it here" << endl;
		cout << "The book " << bookName << " falls to the ground" << endl;
	}
	else{
	    increment();
	    bookCase.push_back(bookName);
	}
}

//prints out the contents of the shelf
void Shelf::getShelf(){
    cout << "Bookcase currently contains the following books:" << endl;
    for(int i = 0; i < bookCase.size(); i++){
        cout << bookCase[i] << endl;
    }
    if(numOfBooks >= maxBooks){
        cout << "The shelf is currently full" << endl;
    }
    else{
        cout << "there are currently " << maxBooks - numOfBooks << " spaces left on the shelf to be filled" << endl;
    }
}

//increments the number of books on the shelf
void Shelf::increment(){
	numOfBooks++;
}

//gets the number of books currently on the shelf
int Shelf::getNumber(){
    return numOfBooks;
}

