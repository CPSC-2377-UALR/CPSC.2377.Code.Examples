#ifndef COFFEE_H
#define COFFEE_H
#include "Drink.h"
class Coffee: public Drink
{
public:
	Coffee() { baseCost = 1; }
private:
};
#endif // !DRINK_H
