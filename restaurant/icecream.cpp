#include "meals.h"
#include "food.h"
#include "icecream.h"
#include <iostream>
using namespace std;

//constructor
Icecream::Icecream(){
    setDishType(false);
    setUtensil("Spoon");
    setPrice(7.50);
    setOrder("Ice Cream");
}

//destructor
Icecream::~Icecream(){

}

//sets the price of the meal
void Icecream::setPrice(float mealPrice){
	if(mealPrice != 7.50){
		//cout << "This has a set price of $" << m_mealPrice << ", but nice try there" << endl;
		mealPrice = 7.50;
	}
	m_mealPrice = mealPrice;
}

void Icecream::setUtensil(string utensil){
	if(utensil != "Spoon" ){
		cout << "Nope, can't do that" << endl;
		utensil = m_utensil;
	}
	m_utensil = utensil;
}

void Icecream::setNumToppings(int numToppings){
	m_numToppings = numToppings;
}

int Icecream::getNumToppings(){
	return m_numToppings;
}

void Icecream::setCone(bool cone){
	m_cone = cone;
}

bool Icecream::getCone(){
	if(m_cone = true){
		cout << "Ice cream served in a cone" << endl;
	}
	else{
		cout << "Ice cream served in a bowl" << endl;
	}
	return m_cone;
}

void Icecream::setOrder(std::string mealName){
	if(mealName != "Ice Cream"){
		mealName = m_mealName;
	}
	m_mealName = mealName;
}
