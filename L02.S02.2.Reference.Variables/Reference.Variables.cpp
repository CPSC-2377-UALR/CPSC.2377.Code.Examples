#include <iostream>

using namespace std;

int main()
{
	//Lesson 1: the & symbol deals with memory location of variables.
	int x = 0;
	cout << x << endl;
	cout << &x << endl;

	//Lesson 2: Reference Variables have no memory of their own.
	//(Well technically, they store a memory address)
	//So it can't store a value on it's own.
	int & y = 4;

	//Lesson 3: It must be given a memory address of another variable!
	int & z = x;

	//Lesson 4: They have everything in common!
	cout << z << " " << x << endl;
	z++; 
	cout << z << " " << x << endl;
	x++;
	cout << z << " " << x << endl;


	//Lesson 5: It's a lifelong partnership
	int a = 7;
	cout << &a << " " << &z << " " << &x << endl;
	z = a;
	cout << &a << " " << &z << " " << &x << endl;

	return 0;
}