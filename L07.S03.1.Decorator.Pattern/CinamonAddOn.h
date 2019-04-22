#ifndef CINAMON_ADD_ON_H
#define CINAMON_ADD_ON_H
#include "iAddOnDecorator.h"
class CinamonAddOn : public iAddOnDecorator
{
public:
	CinamonAddOn(Drink* addedTo)
	{
		addOn = addedTo;
		baseCost = 0.01f;
	}
private:
};
#endif // !DRINK_H
