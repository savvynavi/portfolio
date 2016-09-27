#ifndef BICYCLE_H
#define BYCYCLE_H
#include "vehicle.h"
class Bicycle : public Vehicle{
public:
    Bicycle();
    ~Bicycle();
    void setBikeGear(int bikeGear);
    int getBikeGear();
    void setPannierWeight(int pannierWeight);
    int getPannierWeight();
    void adjustSeat();
    void setWheelNum(int wheelNum);
private:
    int m_bikeGear;
    int m_pannierWeight;
};
#endif
