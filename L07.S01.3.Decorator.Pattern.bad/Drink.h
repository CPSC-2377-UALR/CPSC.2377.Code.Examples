#ifndef DRINK_H
#define DRINK_H
class Drink
{
public:
	Drink() {};
	virtual float getCost();

protected:
	float baseCost{ 0.0f };


};
#endif // !DRINK_H
