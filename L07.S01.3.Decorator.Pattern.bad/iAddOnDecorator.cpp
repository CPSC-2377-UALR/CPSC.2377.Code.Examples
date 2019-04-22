#include "iAddOnDecorator.h"

float iAddOnDecorator::getCost()
{
	return baseCost + addOn->getCost();
}
