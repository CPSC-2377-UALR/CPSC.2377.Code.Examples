#include "CaramelDecorator.h"



CaramelDecorator::CaramelDecorator()
{
}

CaramelDecorator::CaramelDecorator(Beverage * beverage):AddOnDecorator(beverage)
{
}


CaramelDecorator::~CaramelDecorator()
{
}

float CaramelDecorator::cost() const
{
	return beverage->cost() + 0.25f;
}
