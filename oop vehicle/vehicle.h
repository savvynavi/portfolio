#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle{
public:
    Vehicle();
    ~Vehicle();
    int getWheelNum();
    virtual void setWheelNum(int wheelNum);
    void setPower(bool powered);
    bool isPowered();
    int getSpeed();
    void setSpeed(int speed);
    int moving();
protected:
    int m_wheelNum;
    bool m_powered;
    int m_speed;
};
#endif
