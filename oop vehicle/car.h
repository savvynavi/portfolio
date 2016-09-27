#ifndef CAR_H
#define CAR_H
#include "vehicle.h"
class Car : public Vehicle{
public:
    Car();
    ~Car();
    void setNumWindows(int numWindows);
    int getNumWindows();
    void setGear(int gear);
    int getGear();
    void setWheelNum(int wheelNum);
private:
    int m_numWindows;
    int m_gear;
};
#endif
