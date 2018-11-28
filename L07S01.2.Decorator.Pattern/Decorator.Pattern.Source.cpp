/* Example based off this video: https://www.youtube.com/watch?v=GCraGHx6gso */

#include <iostream>
#include <vector>

#include "Beverage.h"
#include "Espresso.h"
#include "RegularCoffee.h"
#include "DecafCoffee.h"

#include "AddOnDecorator.h"
#include "MochaDecorator.h"
#include "CaramelDecorator.h"
#include "CreamDecorator.h"
#include "SugarDecorator.h"

using namespace std;

enum class CoffeeType {Espresso=1, Regular, Decaf, NumCoffeeTypes};
enum class AddOns {Mocha=1, Caramel, Cream, Sugar, NumAddOns};

Beverage* chooseCoffeeType();
bool addOn(Beverage* & beverage);
bool anotherBeverage(const Beverage* beverage);
void finalizeOrder(const vector<Beverage*> order);


int main()
{
	cout << "Welcome to Mr. Orme's Coffe Cafe!!! \n"
		<< "May I take your order!\n";
	
	vector<Beverage*> order;
	
	do
	{
		order.push_back(chooseCoffeeType());
		while (addOn(order.back())) {}

	} while (anotherBeverage(order.back()));

	finalizeOrder(order);
}

Beverage * chooseCoffeeType()
{
	int type{ 0 };
	while (type < 1 || type >= (int)CoffeeType::NumCoffeeTypes)
	{
		cout << "What type of coffee do you want: \n"
			<< "1. Espresso \n"
			<< "2. Regular Coffee\n"
			<< "3. Decaf Coffee" << endl;

		cin >> type;
		switch ((CoffeeType)type)
		{
		case CoffeeType::Espresso:
			return new Espresso();
		case CoffeeType::Regular:
			return new RegularCoffee();
		case CoffeeType::Decaf:
			return new DecafCoffee();
		default:
			cout << "Please choose a valid coffee!\n";
			system("PAUSE");
			system("CLS");
		}
	}
}

bool addOn(Beverage *& beverage)
{
	cout << "Do you want to add something to your drink?(y/n)\n";
	char addAddOn;
	cin >> addAddOn;
	if (addAddOn == 'y')
	{
		int type{ 0 };
		AddOnDecorator* addMe = nullptr;
		while (type < 1 || type >= (int)AddOns::NumAddOns)
		{
			cout << "What do you want to add to your drink: \n"
				<< "1. Mocha \n"
				<< "2. Caramel\n"
				<< "3. Cream \n"
				<< "4. Sugar" << endl;

			cin >> type;
			
			switch ((AddOns)type)
			{
			case AddOns::Mocha:
				addMe = new MochaDecorator();
				break;
			case AddOns::Caramel:
				addMe = new CaramelDecorator();
				break;
			case AddOns::Cream:
				addMe = new CreamDecorator();
				break;
			case AddOns::Sugar:
				addMe = new SugarDecorator();
				break;
			default:
				cout << "Please choose a valid coffee!\n";
				system("PAUSE");
				system("CLS");
			}
			
		}
		addMe->beverage = beverage;
		beverage = addMe;
		return true;
	}
	return false;
}

bool anotherBeverage(const Beverage * beverage)
{
	cout << "Drink added to order, cost: $" << beverage->cost() << endl;
	cout << "Do you want to add another drink to your order (y/n): ";
	char anotherDrink{ 'n' };
	cin >> anotherDrink;
	if (anotherDrink == 'y') return true;
	else return false;

}

void finalizeOrder(const vector<Beverage*> order)
{
	cout << "Your cost is:  $";
	float orderTotal{ 0.0f };
	for (auto drink : order)
	{
		orderTotal += drink->cost();
	}

	cout << orderTotal << endl;
	system("PAUSE");
}
