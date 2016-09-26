#include "meals.h"
#include "drink.h"
#include "wine.h"
#include <iostream>
using namespace std;

//constructor
Wine::Wine(){
	setTemperature(false);
	setCarbonate(true);
	setAlcohol(true);
	setColour(true);
	setPrice(5.50);
}

//destructor
Wine::~Wine(){

}

//make carbonate always set to true
void Wine::setCarbonate(bool fizzy){
	if(fizzy != true){
		cout << "Wine is usually carbonated, so you can't change this" << endl;
		fizzy = true;
	}
	m_fizzy = fizzy;
}

//make temperature always set to false
void Wine::setTemperature(bool temp){
	if(temp != false){
		cout << "Wine is generally cold, can't change this" << endl;
		temp = false;
	}
	m_temp = temp;
}

//make alcohol always set to true
void Wine::setAlcohol(bool alcohol){
	if(alcohol != true){
		cout << "Wine is alcoholic, can't change this" << endl;
		alcohol = true;
	}
	m_alcohol = alcohol;
}

//sets the colour of the wine to either red or white
void Wine::setColour(bool colour){
	m_colour = colour;
}

//gets the colour of the wine ordered
bool Wine::getColour(){
	if(m_colour == true){
		cout << "The wine is red" << endl;
	}
	else{
		cout << "The wine is white" << endl;
	}
	return m_colour;
}

//sets the price to an unchanging value
void Wine::setPrice(float mealPrice){
	if(mealPrice != 5.50){
		cout << "This has a set price of $" << m_mealPrice << ", but nice try there" << endl;
		mealPrice = 5.50;
	}
	m_mealPrice = mealPrice;
}

void Wine::setOrder(std::string mealName){
	if(mealName != "Wine"){
		mealName = m_mealName;
	}
	m_mealName = mealName;
}
