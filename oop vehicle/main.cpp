#include "vehicle.h"
#include "car.h"
#include "bicycle.h"
#include <iostream>
using namespace std;

int main(){
    Car car1;
    car1.getWheelNum();
    car1.setWheelNum(10);
    car1.getWheelNum();
    car1.setSpeed(20);
    car1.getSpeed();
    car1.setNumWindows(5);
    car1.getNumWindows();
    car1.setGear(0);
    car1.getGear();
    car1.isPowered();
    car1.setPower(true);
    car1.moving();

    cout << endl;
    
    Bicycle bike;
    bike.getWheelNum();
    bike.setWheelNum(60);
    bike.getWheelNum();    
    bike.setBikeGear(3);
    bike.getBikeGear();
    bike.setSpeed(2);
    bike.getSpeed();
    bike.adjustSeat();
    bike.moving();
    cout << endl;
    return 0;
}
