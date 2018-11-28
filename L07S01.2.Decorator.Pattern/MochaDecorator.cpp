#include "MochaDecorator.h"



MochaDecorator::MochaDecorator()
{
}


MochaDecorator::~MochaDecorator()
{
}

float MochaDecorator::cost() const
{
	return beverage->cost() + 0.25f;
}
