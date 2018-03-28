/*
 * File: example.cpp
 * Author: Keith Bush (2013)
 */

#include<iostream>

using namespace std;

int main(){

	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			cout << i%j << " "<< i <<"%" << j << "\t";
		}
		cout << endl;
	}
	cout << "Hello world!" << endl;
	
	system("PAUSE");

	return 0;
}