#pragma once
#include "AddOnDecorator.h"
class MochaDecorator :
	public AddOnDecorator
{
public:
	MochaDecorator();
	~MochaDecorator();
	float cost() const override;
};

