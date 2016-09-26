#ifndef WATER_H
#define WATER_H

class Water : public Drink{
public:
	Water();
	~Water();
	
	void setCarbonate(bool alcohol);
	void setTemperature(bool temp);
	void setAlcohol(bool alcohol);
	void setPrice(float mealPrice);
	void setOrder(std::string mealName);
	
	void setNumIce(int numIce);
	int getNumIce();
protected:
	int m_numIce;
};
#endif
