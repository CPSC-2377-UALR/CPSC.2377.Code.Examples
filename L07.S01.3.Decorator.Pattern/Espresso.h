#ifndef ESPRESSO_H
#define ESPRESSO_H
#include "Drink.h"
class Espresso : public Drink
{
public:
	Espresso() { baseCost = 1.25; }
private:
};
#endif // !DRINK_H
