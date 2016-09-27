#include "vehicle.h"
#include "bicycle.h"
#include <iostream>
using namespace std;

//constructor, with the wheels set to 2 by default
Bicycle::Bicycle(){
    setWheelNum(2);
    setPannierWeight(0);
    setBikeGear(1);
}

//destructor
Bicycle::~Bicycle(){
}

//sets the gear number of the bike, from 1-5
void Bicycle::setBikeGear(int bikeGear){
    if(bikeGear <= 0){
        cout << "The gears only go as low as 1" << endl;
    }
    else if(bikeGear > 6){
        cout << "The bike only has 5 gears, can't go that high" << endl;
    }
    else{
        m_bikeGear = bikeGear;
    }
}

//gets the current gear the bike is in
int Bicycle::getBikeGear(){
    cout << "The bike is currently in this gear: " << m_bikeGear << endl;
    return m_bikeGear;
}

//sets the weight of items in the pannier
void Bicycle::setPannierWeight(int pannierWeight){
    if(pannierWeight < 0){
        m_pannierWeight = 0;
    }
    else if(pannierWeight > 16){
        cout << "The basket can only hold up to 15kg, that is too much weight" << endl;
    }
    else{
        m_pannierWeight = pannierWeight;
    }
}

//gets the current weight in the pannier
int Bicycle::getPannierWeight(){
    cout << "The basket currently has this much weight inside: " << m_pannierWeight << endl;
    return m_pannierWeight;
}

//lets you adjust the seat position, from 1-4
void Bicycle::adjustSeat(){
    cout << "You adjust the seat a bit" << endl;
}

//stops you from adding more than 2 wheels to the bike
void Bicycle::setWheelNum(int wheelNum){
    m_wheelNum = wheelNum;
    if(m_wheelNum != 2){
        cout << "Bikes generally only have 2 wheels, hence the bi part of the name, any less means it's a unicycle, any more an it's a trike. So you can't change this" << endl;
        m_wheelNum = 2;
    }
}
