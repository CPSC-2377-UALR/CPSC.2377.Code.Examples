/*
 * File: addtwonumbers.cpp
 * Author: Keith Bush (2013)
 *
 * Purpose: demonstrate the role of function templates in abstracting
 *          the notion of function overloading to be an automated process
 *          where types (e.g., T) now represent any type
 *          in C++
 */
#include<iostream>
using namespace std;

/* 
 * Below is the Programming 1 approach (function overloading)
 */

//int addTwoNumbers(int a, int b){
//	cout << "Int version:" << endl;
//	return(a+b);
//}
//
//float addTwoNumbers(float a, float b){
//	cout << "Float version:" << endl;
//	return(a+b);
//}

template<class A, class B>
A addTwoNumbers(A a, B b){
	cout << "template version:" << endl;
	return(a+b);
}


///*
// * Below is the Programming 2 approach (use function templates that
// * can adapt to any types for which the '+' operator is overloaded)
// */
//template<class A, class B>
//A addTwoNumbers(A a, B b){
//	cout << sizeof(A) << endl;
//	return(a+b);
//}

/*
/*
 * Simple class to show that templates work for user-defined types
 * for which the + operator is overloaded.
 */
class Spaceship{
public:
	int x;
	Spaceship(int _x){x = _x;}
};

Spaceship operator +(Spaceship& a, Spaceship & b){return(Spaceship(a.x+b.x));}

void main(){

	/*
	 * Lesson 1: Try doing this with both overloaded functions and templates 
	 * by commenting out and uncomment the code (either overloaded or templated) above
	 */
	/*int x1 = 1, y1 = 2;
	float x2=1.0, y2=2.2;
	cout << addTwoNumbers(x2,y2) << endl;*/

	/*
	 * Lesson 2: Play around with the location of x3 and y3 in the
	 * parameter list to show how the template enforces casting in
	 * the declarations/definitions above
	 */
	/*double x3 = 4.3; int y3 = 2;
	cout << addTwoNumbers(x3,y3) << endl;*/

	/////*
	//// * Lesson 3: Observe the generalizing power of templates
	//// */
	Spaceship a(2);
	Spaceship b(3);
	cout << addTwoNumbers(a,b).x << endl;

	system("PAUSE");

}