#ifndef SUGAR_ADD_ON_H
#define SUGAR_ADD_ON_H
#include "iAddOnDecorator.h"
class SugarAddOn : public iAddOnDecorator
{
public:
	SugarAddOn() { baseCost = .15; }
private:
};
#endif // !DRINK_H
