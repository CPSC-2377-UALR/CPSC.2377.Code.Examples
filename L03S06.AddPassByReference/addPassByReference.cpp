/*
 * File: addPassByReference.cpp
 * Author: Keith Bush (2013)
 */

#include <iostream>
#include <tuple>
using namespace std;
struct Answers {
	int sum;
	int product;
};
void addMultiplyTwoNumbers(int , int , int &, int &);
Answers addMultiplyTwoNumbers(int, int);
tuple<int, int> addMultiplyTwoNumberTuple(int, int);
int main(){
	
	int sum=0, n1=5, n2=7, product=0;
	addMultiplyTwoNumbers(n1,n2,sum,product);
	cout << sum << " " << product << endl;
	
	auto[sumS, prodS] = addMultiplyTwoNumbers(n1, n2);
	cout << sumS << " " << prodS << endl;
	
	Answers answer = addMultiplyTwoNumbers(n1, n2);
	cout << answer.sum << " " << answer.product << endl;
	
	auto[sumT, prodT] = addMultiplyTwoNumberTuple(n1, n2);
	cout << sumT << " " << prodT << endl;
	system("PAUSE");

	return 0;
}

void addMultiplyTwoNumbers(int num1, int  num2, int & Psum, int & prod){ 
	Psum = num1+num2;
	prod = num1*num2;
	num1 = 99;
	num2 = 100;

}

Answers addMultiplyTwoNumbers(int num1, int num2)
{
	return {num1+num2, num1*num2};
}

tuple<int, int> addMultiplyTwoNumberTuple(int num1, int num2)
{
	return { num1 + num2, num1*num2 };
}