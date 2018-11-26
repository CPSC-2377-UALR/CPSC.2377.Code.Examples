/*
* File: setexample.cpp
* Author: Keith Bush (2013)
*
* Purpose: Demonstrates the use and function of the set template class
*/
#include<iostream>
#include<set>

using namespace std;

void main(){

	/*
	 *Lesson 1: sets maintain an order of elements
	 */
	set<char> s;
	cout << "Insert c, s, and p." << endl;
	s.insert('c');
	s.insert('s');
	s.insert('p');

	cout << "Set contents: ";
	set<char>::iterator p;
	for(p=s.begin();p!=s.end();p++){
		cout << *p << " ";
	}
	cout << endl;

	/*
	 *Lesson 2: sets maintain uniqueness of elements
	 */
	cout << "Insert c" << endl; 
	s.insert('c');
	cout << "Set contents: "; 
	for(p=s.begin();p!=s.end();p++){
		cout << *p << " ";
	}cout << endl;

	/////*** NUMERICAL VERSION ***/
	set<int> s;
	//cout << "Insert c, s, and p." << endl;
	s.insert(45);
	s.insert(-5);
	s.insert(1);

	cout << "Set contents: ";
	set<int>::iterator p;
	for(p=s.begin();p!=s.end();p++){
		cout << *p << " ";
	}cout << endl;




	//*
	// *Lesson 3: removing from sets is easy
	// */
	cout << "Erase c" << endl;
	s.erase('c');
	cout << "Set contents: ";
	for(p=s.begin();p!=s.end();p++){
		cout << *p << " ";
	}cout << endl;

	///*
	// *Lesson 4: sets are searchable
	// */
	if(s.find('s')!=s.end()){
		cout << "Contains s" << endl;
	}
	if(s.find('x')!=s.end()){
		cout << "Contains x" << endl;
	}
	
	system("PAUSE");
}