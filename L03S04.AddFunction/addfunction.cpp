/*
 * File: addfunction.cpp
 * Author: Keith Bush (2013)
 */

#include<iostream>

using namespace std;

int addTwoNumbers(int num1, int num2){
	return(num1+num2);
}

bool isItCraps(int num2Check)
{
	
	if (num2Check == 7 || num2Check == 11)
	{
		return true;
	}
	else
	{
		return false;
	}
	cout << "passed the if";
}

int main(){

	int sum=0, n1=0, n2=0;

	while( !isItCraps(sum) ){
		
		cout << "Enter two numbers on the range [0,6]: ";
		cin >> n1 >> n2;
		sum = addTwoNumbers(n1%7,n2%7);
	}

	cout << "Craps!" << endl;

	system("PAUSE");

	return 0;
}