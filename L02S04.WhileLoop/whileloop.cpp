/*
 * File: whileloop.cpp
 * Author: Keith Bush (2013)
 */

#include<iostream>

using namespace std;

int main(){

	{
		int sum = 0;
		int sumTotal = 1000;
		for (int count = 1; sum < sumTotal; count++)
		{
			sum += count;
		}

	}
	const int sumTotal = 1000;
	int sum = 0;
	int count = 1;

	while(sum < sumTotal){
		sum += count;
		count ++;
	}
	cout << endl;

	count--;
	cout << "The lowest consecutive possitive integers\nthat add up to a value greater than " << sumTotal << " are 1 through " << count << endl;
	

	
	{
		int num = -1;
		int sum = 0;
		do
		{
			cout << "Your current sum is: " << sum << endl;
			cout << "Please enter the next value to add (a negative number will end the adding): ";
			cin >> num;
			if (num > 0) sum += num;

		} while (num > 0);
	}

	system("PAUSE");

	return 0;

}