#include "vehicle.h"
#include <iostream>
using namespace std;

//constructor
Vehicle::Vehicle(){
    m_powered = false;
}

//destructor
Vehicle::~Vehicle(){
}

//gets the number of wheels on the vehicle
int Vehicle::getWheelNum(){
    cout << "Number of wheels: " << m_wheelNum << endl;
    return m_wheelNum;
}

//sets the number of wheels on the vehicle
void Vehicle::setWheelNum(int wheelNum){
    m_wheelNum = wheelNum;
}

//sets if the vehicle is powered or not
void Vehicle::setPower(bool powered){
    m_powered = powered;
}

//gets whether the vehicle is currently powered or not
bool Vehicle::isPowered(){
    if(m_powered == true){
        cout << "Is currently powered" << endl;
    }
    else{
        cout << "Is currently unpowered" << endl;
    }
    return m_powered;
}

//gets the vehicles current speed
int Vehicle::getSpeed(){
    cout << "Current speed: " << m_speed << endl;
    return m_speed;
}

//sets the vehicles speed
void Vehicle::setSpeed(int speed){
    m_speed = speed;
    if(m_speed < 0){
        m_speed = 0;
    }
}

//checks to see if the vehicle is moving
int Vehicle::moving(){
    if(m_speed > 0 && m_powered == true){
        cout << "It is currently moving at " << m_speed << " Km/h" << endl;
    }
    else{
        cout << "It is currently stationary" << endl;
    }
}
