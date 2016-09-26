#include "meals.h"
#include "food.h"
#include "drink.h"
#include "water.h"
#include "wine.h"
#include "pizza.h"
#include "icecream.h"
#include <iostream>
#include <sstream>
using namespace std;

//I am sorry that you have to read this, but it kept breaking when I tried to put things into separate functions

int main(){
	//letting the user name the restaurant they are going to
	cout << "What restaurant do you want to go to today?: ";
	string restName;
	cin >> restName;
	
	//Let the user say how many people are going, up to a limit of 10
	cout << "\nAnd how many people will be going?: ";
	int numGuests = 0;	
	while(numGuests <= 0){
		//clears cin, because it decided to hold onto the input when it shouldn't. Breaks without these 2 lines when chars are entered
		cin.clear();
		cin.ignore();
		cin >> numGuests;
		
		if(numGuests <= 0){
			cout << "Please enter a non-negative number between 1 and 10\n";
			numGuests = 0;
		}
		else if(numGuests > 10){
			cout << "Sorry, that is too many people, the restaurant can't seat that many. Please enter a number between 1 and 10\n";
			numGuests = 0;
		}
	}
	
	//creating arrays for the orders
	string* mealsArray = new string[numGuests];
	string* drinkArray = new string[numGuests];
	
	//creating boolean vars to keep track of what the user has been ordering
	bool drinksWereOrdered = false;
	bool mealsWereOrdered = false;
	
	//keeps track of how many of an item has been ordered
	int numWater;
	int numWine;
	
	//drink ordering
	cout << "\nWelcome to " << restName << ", would you like to order drinks for everyone? Just type y or n: ";
	bool ordering = true;
	while(ordering == true){
		char orderDrink;
		cin.clear();
		cin.ignore();
		cin >> orderDrink;
		if(orderDrink == 'n'){
			cout << "\nOk, straignt onto the meals then\n";
			ordering = false;
		}
		else if(orderDrink == 'y'){
			cout << "Ok, choices for drinks are either water or wine.\nJust type either 1 for water or 2 for wine and hit enter after each order\n";
			int drinks;
			drinksWereOrdered = true;
			for(int i = 0; i < numGuests; i++){
				cout << "Guest " << (i + 1) << " order: ";
				cin.clear();
				cin.ignore();
				cin >> drinks;
				switch(drinks){
				case 1:
					drinkArray[i] = "Water";
					numWater++;
					break;
				case 2:
					drinkArray[i] = "Wine";
					numWine++;
					break;
				default:
					cout << "That wans't a valid order\n";
					i--;
					break;
				}
			}
			ordering = false;
		}
		else{
			cout << "please enter a valid input (Either y or n)\n";
		}
	}
	
	
	//Meal ordering
	cout << "Would you like to order meals now? ";
	ordering = true;
	while(ordering == true){
		cin.clear();
		cin.ignore();
		char orderMeals;
		cin >> orderMeals;
		if(orderMeals == 'n'){
			cout << "\nOk, Just call me over when you want to pay\n";
			ordering = false;
		}
		else if(orderMeals == 'y'){
						cout << "Ok, choices for meals are either pizza or icecream.\nJust type either 1 for pizza or 2 for icecream and hit enter after each order\n";
			mealsWereOrdered = true;
			int meals;
			for(int i = 0; i < numGuests; i++){
				cout << "Guest " << (i + 1) << " order: ";
				cin.clear();
				cin.ignore();
				cin >> meals;
				switch(meals){
				case 1:
					mealsArray[i] = "Pizza";
					break;
				case 2:
					mealsArray[i] = "Icecream";
					break;
				default:
					cout << "That wasn't a valid order\n";
					i--;
					break;
				}
			}
			ordering = false;
		}
		else{
			cout << "please enter a valid input (Either y or n)\n";
		}
	}
	
	//prints out what the user has been ordering
	cout << "Ok, let me just read your orders back to you\n";
	if(drinksWereOrdered == true){
		for(int i = 0; i < numGuests; i++){
			cout << "Guest" << (i + 1) << " ordered " << drinkArray[i] << " to drink\n";
		}
	}
	if(mealsWereOrdered == true){
		cout << endl;
		for(int i = 0; i < numGuests; i++){
			cout << "Guest" << (i + 1) << " ordered " << mealsArray[i] << " to Eat\n";
		}
	}
	
	Water water;
	float waterPrice = water.getPrice();
	Wine wine;
	float winePrice = wine.getPrice();
	Pizza pizza;
	float pizzaPrice = pizza.getPrice();
	Icecream iceCream;
	float iceCreamPrice = iceCream.getPrice();
	
	//cout << "Is all of this correct? If you want to change part of your order, just type 'y' now: ";
	cout << "And that's your order\n";
	cout << "And here's your bill: ";
	float bill = 0.0;
	for(int i = 0; i < numGuests; i++){
		if(drinkArray[i] == "Water"){
			bill += waterPrice;
		}
		else if(drinkArray[i] == "Wine"){
			bill += winePrice;
		}
		if(mealsArray[i] == "Pizza"){
			bill += pizzaPrice;
		}
		else if(mealsArray[i] == "Icecream"){
			bill += iceCreamPrice;
		}
	}
	cout << "$" << bill << endl;
	cout << "Please come again\n";
	
	delete [] drinkArray;
	return 0;
}
