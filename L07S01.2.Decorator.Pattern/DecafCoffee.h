#pragma once
#include "Beverage.h"
class DecafCoffee :
	public Beverage
{
public:
	DecafCoffee();
	~DecafCoffee();
	float cost() const override;
};

