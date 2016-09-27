#include "vehicle.h"
#include "car.h"
#include <iostream>
using namespace std;

//constructor, with the wheels set to 4 by default
Car::Car(){
    setWheelNum(4);
    setGear(1);
    setNumWindows(0);
}

//destructor
Car::~Car(){
}

//lets you set the number of windows in the car
void Car::setNumWindows(int numWindows){
    if(m_numWindows < 0){
        cout << "Can't have negative windows" << endl;
        m_numWindows = 0;
    }
    else{
        m_numWindows = numWindows;
    }
}

//lets you know how many windows the car has currently
int Car::getNumWindows(){
    cout << "The car has " << m_numWindows << " windows" << endl;
    return m_numWindows;
}

//lets you change the gear the car is in
void Car::setGear(int gear){
    if(gear <= 0){
        cout << "The gears only go down to 1" << endl;
    }
    else if(gear > 7){
        cout << "The gears only go up to 6" << endl;
    }
    else{
        m_gear = gear;
    }
}

//lets you look at what gear the car is currently in
int Car::getGear(){
    cout << "The car is currently in this gear: " << m_gear << endl;
    return m_gear;
}

//stops you from adding more than 4 wheels to the car
void Car::setWheelNum(int wheelNum){
    m_wheelNum = wheelNum;
    if(m_wheelNum != 4){
        cout << "Cars generally only have 4 wheels, any more and it's no longer a car while fewer means it's broken, so you can't set it to that" << endl;
        m_wheelNum = 4;
    }
}
