#pragma once
#include "Beverage.h"
class RegularCoffee :
	public Beverage
{
public:
	RegularCoffee();
	~RegularCoffee();
	float cost() const override;
};

