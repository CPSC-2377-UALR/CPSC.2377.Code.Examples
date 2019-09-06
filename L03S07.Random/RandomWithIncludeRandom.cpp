/*
* File: RandomWithIncludeMemory.cpp
* Author: Sean Orme (2016)
*/

#include <iostream>
#include <random>

using namespace std;

int main() {
	/*
		1. Seed
		2. Engine
		3. Distribution
	*/
	const int MAX_VALUE = 50;
	random_device seed;
	default_random_engine e(seed());

	//default_random_engine e(13);
	//uniform_int_distribution<int> ud(0, MAX_VALUE-1);
	//normal_distribution<double> nd(15.0,2.0); //(mean, standard deviation)
	bernoulli_distribution bd(.75);
	//int myNum = ud(e);
	int distribution[MAX_VALUE] = { 0 };
	for (int i = 0; i < 10000; i++)
	{
		//distribution[ud(e)]++;
		//distribution[(int)nd(e)]++;
		distribution[(int)bd(e)]++;
		
	}

	for (int i = 0; i < MAX_VALUE; i++)
	{
		cout << i << ": " << distribution[i] << endl;;
	}
	cout << endl;
	system("PAUSE");

	return 0;

}