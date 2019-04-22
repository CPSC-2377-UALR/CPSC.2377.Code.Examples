#ifndef SUGAR_ADD_ON_H
#define SUGAR_ADD_ON_H
#include "iAddOnDecorator.h"
class SugarAddOn : public iAddOnDecorator
{
public:
	SugarAddOn(Drink* addedTo) 
	{
		addOn = addedTo;
		baseCost = 0.15f;
	}
	
private:
};
#endif // !DRINK_H
