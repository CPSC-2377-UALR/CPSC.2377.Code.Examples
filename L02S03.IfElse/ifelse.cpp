/*
 * File: ifelse.cpp
 * Author: Keith Bush (2013)
 */

#include <iostream>

using namespace std;

int main(){

	int health;
	cin >> health;
	bool isTrue = true;
	/*if(health == 0)
	{
		cout << "Fatality!" << endl;
	}
	else
	{
		if(health==1)
		{
			cout << "Finish him!" << endl;
		}
		else
		{
			cout << "Fight!" << endl;
		}
	}*/

	enum LIFE {DEAD, ALMOST_DEAD};

	switch (health)
	{
	case 0:
		cout << "Fatality!" << endl;
		break;
	case 1:
		cout << "Finish him!" << endl;
		//break;
	default:
		cout << "Fight!" << endl;
		break;
	}

	system("PAUSE");

	return 0;

}