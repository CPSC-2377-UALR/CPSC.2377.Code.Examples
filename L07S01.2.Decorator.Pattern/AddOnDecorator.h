#pragma once
#include "Beverage.h"
class AddOnDecorator :
	public Beverage
{
public:
	AddOnDecorator();
	AddOnDecorator(Beverage* beverage);
	~AddOnDecorator();

	Beverage* beverage;
};

