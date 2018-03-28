/*
 * File: nonmodifying.cpp
 * Author: Keith Bush (2013)
 *
 * Purpose: Demonstrates the use of various types of nonmodifying algorithms.  Note the common
 *          use of iterators.
 */
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include <string>

using namespace std;

int main(){

	//Declare, construct, and view dataset
	vector<int> v;
	vector<int>::iterator viter;
	int N=20;
	int M=10;
	for(int i=0;i<N;i++){
		v.push_back(rand()%M);
	}

	for(viter=v.begin();viter!=v.end();viter++){
		cout << *viter << " ";
	}cout << endl;

	/*
	* Lesson 1:  Find max and min values
	*/
	cout << "Max val.: " << *(max_element(v.begin(),v.end())) << endl;
	cout << "Min val.: " << *(min_element(v.begin(),v.end())) << endl;

	system("PAUSE");

	///*
	//* Lesson 2: Count patterns within the dataset
	//*/
	/*int pattern = 7;
	cout << "COUNT of 7s = " << count(v.begin(),v.end(),pattern) << endl;

	pattern = 3;
	cout << "COUNT of 3s = " << count(v.begin(),v.end(),pattern) << endl;

	system("PAUSE");*/

	/*
	 * Lesson 3: Copy a subset by using a patten-based search 
	 */
//	vector<int>::iterator stop;
//	pattern = 8;
//	stop = find(v.begin(),v.end(),pattern); 
//	vector<int> v2(v.begin(),stop);
//
//	cout << "subset ending before 8: "; 
//	copy(v2.begin(),v2.end(),ostream_iterator<int>(cout, ",")); cout << endl;
//
//
//	string title = "Dr. Bush";
//	const char* titlePtr = title.c_str();
//	int S = title.size();
//
//	vector<char> t;
//	vector<char>::iterator titer;
//	for(int i=0;i<S;i++){
//		t.push_back(titlePtr[i]);
//	}
//
//	for(titer=t.begin();titer!=t.end();titer++){
//		cout << *titer;
//	}cout << endl;
////
//	cout << "TEST: " << endl;
//	copy(t.begin(),t.end(),ostream_iterator<char>(cout, "")); 
//	cout << endl;
//
//	vector<char> t2 = t;
//	vector<char>::iterator titer2;
//
//	titer2=t2.begin();
//	//titer2++;
//	
//	bool match = equal(t.begin(),t.end(),titer2);
//
//	cout << *titer2 << endl;
//	copy(t2.begin(),t2.end(),ostream_iterator<char>(cout, "")); 
//	cout << endl;
//
//	if(match){
//		cout << "Match found" << endl;
//	}else{
//		cout << "No match found" << endl;
//	}
//
//system("PAUSE");

	return 0;
}