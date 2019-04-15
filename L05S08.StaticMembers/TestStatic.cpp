/*
 * File: TestStatic.cpp
 * Author: Keith Bush (2013)
 *
 * Purpose: demonstrate the role of and means of using static members and methods
 *          in C++
 */
#include <iostream>
#include <vector>

#include "Martian.h"
using namespace std;

int main(){

	//Static members are global within class scope
	Martian martian;
	cout << "After first Martian: " << martian.getPopulation() << " Martians" << endl;

	{
		Martian martian2;
		cout << "After second Martian: " << martian.getPopulation() << " Martians" << endl;
		cout << "After second Martian: " << martian2.getPopulation() << " Martians" << endl;
	}

	
	cout << "After delete Martian: " << martian.getPopulation() << " Martians" << endl;

	vector<Martian> colony;
	for(int i=0;i<10;i++)
	{
		cout << "Pre-Baby:" << martian.getPopulation() << std::endl;
		Martian babyMartian;
		cout << "Pre-Push:" << martian.getPopulation() << std::endl;
		colony.push_back(babyMartian);
		cout << "Post-Push:"<< martian.getPopulation() << std::endl << std::endl;
	}

	//Static methods are global within class scope (and don't need an instance)
	cout << "Without a Martian instance: " << Martian::getPopulationStatic() << " Martians" << endl;

	system("PAUSE");

	return 0;
}