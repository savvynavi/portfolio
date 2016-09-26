#include "meals.h"
#include "food.h"
#include <iostream>
using namespace std;

//constructor
Food::Food(){
    m_utensil = "Fork";
}

//destructor
Food::~Food(){

}

//lets you set the dish type to either a sweet of savoury
void Food::setDishType(bool dishType){
    m_dishType = dishType;
}

//tells you weather the dish is sweet or savoury
bool Food::getDishType(){
    if(m_dishType == true){
        cout << "This dish is savoury" << endl;
    }
    else{
        cout << "This dish is sweet" << endl;
    }
    return m_dishType;
}

//gets what utensil you use to eat the food with
string Food::getUtensil(){
	cout << "You use a " << m_utensil << " to eat this meal" << endl;
	return m_utensil;
}

//lets you set what you eat it with
void Food::setUtensil(string utensil){
	m_utensil = utensil;
}
