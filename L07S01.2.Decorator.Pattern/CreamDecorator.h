#pragma once
#include "AddOnDecorator.h"
class CreamDecorator :
	public AddOnDecorator
{
public:
	CreamDecorator();
	~CreamDecorator();
	float cost() const override;
};

