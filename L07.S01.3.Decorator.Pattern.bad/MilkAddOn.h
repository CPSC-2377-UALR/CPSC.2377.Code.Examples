#ifndef MILK_ADD_ON_H
#define MILK_ADD_ON_H
#include "iAddOnDecorator.h"
class MilkAddOn : public iAddOnDecorator
{
public:
	MilkAddOn() { baseCost = .1; }
private:
};
#endif // !DRINK_H
