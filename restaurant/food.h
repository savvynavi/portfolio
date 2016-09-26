#ifndef FOOD_H
#define FOOD_H

class Food : public Meal{
public:
    Food();
    ~Food();
    
    virtual void setDishType(bool dishType);
    bool getDishType();
    
    virtual void setUtensil(std::string utensil);
    std::string getUtensil();
protected:
    bool m_dishType;
    std::string m_utensil;
};
#endif
