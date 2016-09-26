#ifndef WINE_H
#define WINE_H

class Wine : public Drink{
public:
	Wine();
	~Wine();
	
	void setCarbonate(bool alcohol);
	void setTemperature(bool temp);
	void setAlcohol(bool alcohol);
	void setColour(bool colour);
	bool getColour();
	void setPrice(float mealPrice);
	void setOrder(std::string mealName);
	
protected:
	bool m_colour;
};
#endif
