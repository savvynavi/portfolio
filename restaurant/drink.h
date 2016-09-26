#ifndef DRINK_H
#define DRINK_H

class Drink : public Meal{
public:
	Drink();
	~Drink();
	
	virtual void setAlcohol(bool alcohol);
	bool getAlcohol();
	
	virtual void setTemperature(bool temp);
	bool getTemperature();
	
	virtual void setCarbonate(bool fizzy);
	bool getCarbonate();
protected:
	bool m_alcohol;
	bool m_temp;
	bool m_fizzy;
};
#endif
