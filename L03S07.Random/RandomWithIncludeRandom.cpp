/*
* File: RandomWithIncludeMemory.cpp
* Author: Sean Orme (2016)
*/

#include <iostream>
#include <ctime>
#include <random>

using namespace std;

int main() {
	const int MAX_VALUE = 50;
	std::random_device rdev;
	static std::default_random_engine e(rdev());
	//static std::default_random_engine e(12);
	static std::uniform_int_distribution<int> ud(1, MAX_VALUE);
	//static std::normal_distribution<double> nd(25.0,2.0); //(mean, standard deviation)
	int distribution[MAX_VALUE] = { 0 };
	for (int i = 0; i < 10000; i++)
	{
		distribution[ud(e)]++;
		//distribution[(int)nd(e)]++;
		
	}

	for (int i = 0; i < MAX_VALUE; i++)
	{
		cout << i << ": " << distribution[i] << endl;;
	}
	cout << endl;
	system("PAUSE");

	return 0;

}