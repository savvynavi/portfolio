#include "meals.h"
#include "drink.h"
#include "water.h"
#include <iostream>
using namespace std;

//constructor
Water::Water(){
	setTemperature(false);
	setCarbonate(false);
	setAlcohol(false);
	setPrice(1.20);
	setOrder("Water");
	setNumIce(0);
}

//destructor
Water::~Water(){

}

//make carbonate always set to false
void Water::setCarbonate(bool fizzy){
	if(fizzy == true){
		cout << "This water is sparkling" << endl;
		m_fizzy = fizzy;
	}
	else{
	        cout << "Normal still water it is" << endl;
	        m_fizzy = fizzy;
	}
	
}

//make temperature always set to false
void Water::setTemperature(bool temp){
	if(temp != false){
		cout << "The water is always cool, can't order boiling water" << endl;
		temp = false;
	}
	m_temp = temp;
}

//make alcohol always set to false
void Water::setAlcohol(bool alcohol){
	if(alcohol != false){
		cout << "Water isn't alcoholic, can't do this" << endl;
		alcohol = false;
	}
	m_alcohol = alcohol;
}

//sets the price to an unchanging value
void Water::setPrice(float mealPrice){
	if(mealPrice != 1.20){
		cout << "This has a set price of $" << m_mealPrice << ", but nice try there" << endl;
		mealPrice = 1.20;
	}
	m_mealPrice = mealPrice;
}

//sets the order to a constant name
void Water::setOrder(std::string mealName){
	if(mealName != "Water"){
		mealName = m_mealName;
	}
	m_mealName = mealName;
}

//lets you set hom many ice cubes you have in your drink to a max of 4
void Water::setNumIce(int numIce){
	if(numIce < 0){
		cout << "Not possible" << endl;
		numIce = 0;
	}
	else if(numIce >= 5){
		cout << "That much ice won't fit in the glass, any less than 4" << endl;
		numIce = 0;
	}
	m_numIce = numIce;
}

//gets how many ice cubes you have
int Water::getNumIce(){
	return m_numIce;
}
