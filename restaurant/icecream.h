#ifndef ICECREAM_H
#define ICECREAM_H
#include <string>

class Icecream : public Food{
public:
	Icecream();
	~Icecream();
	
	void setPrice(float mealPrice);
	void setUtensil(std::string utensil);
	
	void setNumToppings(int numToppings);
	int getNumToppings();
	
	void setCone(bool cone);
	bool getCone();
	
	void setOrder(std::string mealName);
protected:
	int m_numToppings;
	bool m_cone;
};
#endif
