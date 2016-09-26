#ifndef PIZZA_H
#define PIZZA_H
#include <string>
#include <vector>

class Pizza : public Food{
public:
	Pizza();
	~Pizza();
	
	void setPrice(float mealPrice);
	void setUtensil(std::string utensil);
	void setTopping(std::string topping);
	void getTopping();
	void setOrder(std::string mealName);
	void increment();
protected:
	std::vector<std::string> toppings;
	int maxToppings;
	int numOfToppings;
};
#endif
