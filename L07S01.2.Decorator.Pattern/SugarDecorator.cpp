#include "SugarDecorator.h"



SugarDecorator::SugarDecorator()
{
}


SugarDecorator::~SugarDecorator()
{
}

float SugarDecorator::cost() const
{
	return beverage->cost() + 0.0f;
}
