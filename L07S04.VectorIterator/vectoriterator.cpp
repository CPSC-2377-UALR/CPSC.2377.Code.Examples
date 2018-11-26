/*
 * File: vectoriterator.cpp
 * Author: Keith Bush (2013)
 *
 * Purpose: This code introduces the use of the iterator (using the vector template class)
 */

#include<iostream>

#include<vector>
#include<list>
#include<deque>
 
using namespace std;

void main(){
 
	//Populate the vector with 1:4
	vector<int> c;
	for(int i=1;i<=4;i++){
		c.push_back(i);
	}

	/*
	 * Lesson 1: forward iteration 
	 */
	vector<int>::iterator p;
	for(p=c.begin();p!=c.end();p++){
		cout << *p << " ";
	}

	for(p=c.begin();p!=c.end();p++){
		if((*p)%2==0){
			cout << "insert: " << *p << endl;
			p=c.insert(p,-1);
			p++;
		}
	}


	//for(p=c.begin();p!=c.end();p++){
	//	cout << *p << " ";//endl;
	//}cout << endl;

	///*lesson 2: the reverse iterator*/

	vector<int>::reverse_iterator rp;
	for(rp=c.rbegin();rp!=c.rend();rp++){
		cout << *rp << " ";
	}cout << endl;

	//Lesson 3: using Auto
	for (auto p : c)
	{
		cout << p;
	}


	system("PAUSE");
 
}