#pragma once
#include "Beverage.h"
class Espresso :
	public Beverage
{
public:
	Espresso();
	~Espresso();
	float cost() const override;
};

