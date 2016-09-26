#include "meals.h"
#include <iostream>
using namespace std;

//constructor
Meal::Meal(){
	setPrice(0);
}

//destructor
Meal::~Meal(){

}

//gets the price of the meal
float Meal::getPrice(){
    return m_mealPrice;
}

//sets the price of the meal
void Meal::setPrice(float mealPrice){
    m_mealPrice=mealPrice;
}

//gets the name of the meal
string Meal::getOrder(){
    return m_mealName;
}

//sets the name of the meal
void Meal::setOrder(string mealName){
    m_mealName=mealName;
}
