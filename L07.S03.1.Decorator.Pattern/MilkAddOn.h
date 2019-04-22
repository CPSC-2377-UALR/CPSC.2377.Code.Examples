#ifndef MILK_ADD_ON_H
#define MILK_ADD_ON_H
#include "iAddOnDecorator.h"
class MilkAddOn : public iAddOnDecorator
{
public:
	MilkAddOn(Drink* addedTo)
	{
		addOn = addedTo;
		baseCost = 0.10f;
	}
private:
};
#endif // !DRINK_H
