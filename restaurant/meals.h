#ifndef MEALS_H
#define MEALS_H
#include <string>

class Meal{
public:
    Meal();
    ~Meal();
    virtual void setPrice(float mealPrice);
    float getPrice();
    
    virtual void setOrder(std::string mealName);
    std::string getOrder();  
protected:
    float m_mealPrice;
    std::string m_mealName;
};
#endif
