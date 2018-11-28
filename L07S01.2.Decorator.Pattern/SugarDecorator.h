#pragma once
#include "AddOnDecorator.h"
class SugarDecorator :
	public AddOnDecorator
{
public:
	SugarDecorator();
	~SugarDecorator();
	float cost() const override;
};

