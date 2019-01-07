/*
 * File: addfunction2.cpp
 * Author: Keith Bush (2013)
 */

#include<iostream>

using namespace std;

/* Function declaration*/
int addTwoNumbers(int, int);

int main(){

	int sum=0, n1=0, n2=0;

	while( !(sum==7 || sum==11) ){
		
		cout << "Enter two numbers on the range [0,6]: ";
		cin >> n1 >> n2;

		sum = addTwoNumbers(n1%7,n2%7);
	}

	cout << "Craps!" << endl;

	system("PAUSE");

	return 0;
}

/*Function definition*/
int addTwoNumbers(int num1, int num2){
	return(num1+num2);
}