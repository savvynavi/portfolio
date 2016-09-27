#include "shelf.h"
#include <iostream>
using namespace std;

int main(){
    Shelf bookCase;
	bookCase.placeBook("Scanner Darkly");
	bookCase.placeBook("2001:A Space Odyssey");
	bookCase.placeBook("book 3");
	bookCase.placeBook("book 4");
	bookCase.placeBook("book 5");
	bookCase.placeBook("book 6");
	bookCase.placeBook("book 7");
	bookCase.placeBook("book 8");
	bookCase.placeBook("book 9");
	bookCase.placeBook("book 10");
	bookCase.getShelf();
	cout << endl;
	bookCase.placeBook("book 11");
	return 0;
}
