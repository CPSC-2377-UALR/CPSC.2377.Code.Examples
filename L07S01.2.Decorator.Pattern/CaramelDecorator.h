#pragma once
#include "AddOnDecorator.h"
class CaramelDecorator :
	public AddOnDecorator
{
public:
	CaramelDecorator();
	CaramelDecorator(Beverage* beverage);
	~CaramelDecorator();
	float cost() const override;
};

