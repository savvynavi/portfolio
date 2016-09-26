#include "meals.h"
#include "food.h"
#include "pizza.h"
#include <iostream>
using namespace std;

//constructor
Pizza::Pizza(){
    setDishType(true);
    setUtensil("Hands");
    setPrice(10);
    setOrder("Pizza");
    maxToppings = 5;
    numOfToppings = 0;
}

//destructor
Pizza::~Pizza(){

}

//sets the price of the meal
void Pizza::setPrice(float mealPrice){
	if(mealPrice != 10){
		cout << "This has a set price of $" << m_mealPrice << ", but nice try there" << endl;
		mealPrice = 10;
	}
	m_mealPrice = mealPrice;
}

//Makes the utensil used to eat it unchangeable
void Pizza::setUtensil(string utensil){
	if(utensil != "Hands" ){
		cout << "Nope, can't do that" << endl;
		utensil = m_utensil;
	}
	m_utensil = utensil;
}

//Makes the name of the meal unchangeable
void Pizza::setOrder(std::string mealName){
	if(mealName != "Pizza"){
		mealName = m_mealName;
	}
	m_mealName = mealName;
}

//lets you set toppings onto your pizza, up to 6 different ones
void Pizza::setTopping(string topping){
	if(numOfToppings == maxToppings){
		cout << "There is no more room on the pizza for more toppings" << endl;
	}
	else{
		increment();
		toppings.push_back(topping);
	}
}

//gets what you have put on the pizza
void Pizza::getTopping(){
	cout << "Your pizza currently has the following toppings: " << endl;
	for(int i = 0; i < toppings.size(); i++){
		cout << toppings[i] << endl;
	}
	if(numOfToppings >= maxToppings){
		cout << "The pizza if loaded up" << endl;
	}
	else{
		cout << "You can still fit " << maxToppings - numOfToppings << " toppings onto the pizza" << endl; 
	}
}

void Pizza::increment(){
	numOfToppings++;
}
