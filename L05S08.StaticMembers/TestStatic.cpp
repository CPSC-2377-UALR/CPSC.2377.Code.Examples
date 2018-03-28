/*
 * File: TestStatic.cpp
 * Author: Keith Bush (2013)
 *
 * Purpose: demonstrate the role of and means of using static members and methods
 *          in C++
 */
#include <iostream>
#include "Martian.h"
using namespace std;

int main(){

	//Static members are global within class scope
	Martian martian;
	cout << "After first Martian: " << martian.getPopulation() << " Martians" << endl;

	Martian* martian2 = new Martian();
	cout << "After second Martian: " << martian.getPopulation() << " Martians" << endl;
	cout << "After second Martian: " << martian2->getPopulation() << " Martians" << endl;

	delete martian2;
	cout << "After delete Martian: " << martian.getPopulation() << " Martians" << endl;

	Martian** colony = new Martian*[1000];
	for(int i=0;i<1000;i++)
	{
		colony[i] = new Martian();
		cout << martian.getPopulation() << std::endl;
	}

	//Static methods are global within class scope (and don't need an instance)
	cout << "Without a Martian instance: " << Martian::getPopulationStatic() << " Martians" << endl;

	system("PAUSE");

	return 0;
}