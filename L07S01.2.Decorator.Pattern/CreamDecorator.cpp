#include "CreamDecorator.h"



CreamDecorator::CreamDecorator()
{
}


CreamDecorator::~CreamDecorator()
{
}

float CreamDecorator::cost() const
{
	return beverage->cost() + 0.10f;
}
