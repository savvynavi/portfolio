#include "meals.h"
#include "drink.h"
#include <iostream>
using namespace std;

//constructor
Drink::Drink(){

}

//destructor
Drink::~Drink(){

}

//sets whether it's alcoholic or not
void Drink::setAlcohol(bool alcohol){
	m_alcohol = alcohol;
}

//gets the alcohol level of a drink
bool Drink::getAlcohol(){
	if(m_alcohol == true){
		cout << "This drink is alcoholic" << endl;
	}
	else{
		cout << "This drink is non-alcoholic" << endl;
	}
	return m_alcohol;
}

//Set whether the frink is hot or cold
void Drink::setTemperature(bool temp){
	m_temp = temp;
}

//gets whether the drink if hot or not
bool Drink::getTemperature(){
	if(m_temp == true){
		cout << "This drink is hot" << endl;
	}
	else{
		cout << "This drink is refreshingly cold" << endl;
	}
	return m_temp;
}

//sets whether the drink is fizzy or not
void Drink::setCarbonate(bool fizzy){
	m_fizzy = fizzy;
}

//gets whether hte drink is fizzy or not
bool Drink::getCarbonate(){
	if(m_fizzy == true){
		cout << "This drink is carbonated" << endl;
	}
	else{
		cout << "This drink is not carbonated" << endl;
	}
	return m_fizzy;
}
