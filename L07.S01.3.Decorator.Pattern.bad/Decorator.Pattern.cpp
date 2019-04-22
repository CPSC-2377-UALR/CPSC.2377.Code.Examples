#include <iostream>
#include "CinamonAddOn.h"
#include "Coffee.h"
#include "Drink.h"
#include "Espresso.h"
#include "iAddOnDecorator.h"
#include "Latte.h"
#include "MilkAddOn.h"
#include "SugarAddOn.h"

using namespace std;
int main()
{
	
	cout << "What would you like to drink? " << endl;
	cout << "(c)offee, (e)spresso, (l)atte: ";
	char drink;
	cin >> drink;
	
	
	Drink* currentDrink{ nullptr };
	switch (drink)
	{
	case 'c':
		currentDrink = new Coffee();
		break;
	case 'e':
		currentDrink = new Espresso();
		break;
	case 'l':
		currentDrink = new Latte();
		break;
	default:
		break;
	}
	char addOn = ' ';
	while (addOn != 'd')
	{
		system("CLS");
		cout << "Total Cost: " << currentDrink->getCost() << endl;
		cout << "Please Choose addOns!" << endl;
		cout << "(s)ugar, (m)ilk, (c)innamon, (d)one: ";
		cin >> addOn;
	}

	return 0;
}