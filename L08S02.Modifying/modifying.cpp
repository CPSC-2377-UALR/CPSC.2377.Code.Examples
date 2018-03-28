/*
* File: modifying.cpp
* Author: Keith Bush (2013)
*
* Purpose: Demonstrates the use of various types of modifying algorithms.  Note the common
*          use of iterators.
*/

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include <string>

using namespace std;


int GenRandNumber(){
	return(rand()%100); //functor
}


int main(){

	//Declare, construct, and view dataset
	vector<int> v;
	vector<int>::iterator viter;
	int N=8;
	int M=20;
	for(int i=0;i<N;i++){
		v.push_back(rand()%M);
	}

	for(viter=v.begin();viter!=v.end();viter++){
		cout << *viter << " ";
	}cout << endl;

	/*
	* Lesson 1: Overwrite all values in a vector with a pattern
	*/ 
	vector<int> v2(v.begin(),v.end());
	copy(v2.begin(),v2.end(),ostream_iterator<int>(cout, " ")); cout << endl;
	fill(v2.begin(), v2.end(),11);

	/*
	* Lesson 2: Writing a vector to a stream
	*/ 
	/*cout << "overwrite subset with 11: "; 
	copy(v2.begin(),v2.end(),ostream_iterator<int>(cout, " ")); cout << endl;

	system("PAUSE");*/

	/*
	* Lesson 3: Sort a vector (ascending order)
	*/
	/*sort(v.begin(),v.end());
	copy(v.begin(),v.end(),ostream_iterator<int>(cout, " ")); cout << endl;

	system("PAUSE");*/

	/*
	* Lesson 4: Sort a vector (descending order)
	*/
	/*sort(v.rbegin(),v.rend());
	copy(v.begin(),v.end(),ostream_iterator<int>(cout, " ")); cout << endl;*/

	///*
	//* Lesson 5: Randomly shuffle data
	//*/
	/*random_shuffle(v.begin(),v.end());
	copy(v.begin(),v.end(),ostream_iterator<int>(cout, " ")); cout << endl;
	random_shuffle(v.begin(),v.end());
	copy(v.begin(),v.end(),ostream_iterator<int>(cout, " ")); cout << endl;
	random_shuffle(v.begin(),v.end());
	copy(v.begin(),v.end(),ostream_iterator<int>(cout, " ")); cout << endl;
	random_shuffle(v.begin(),v.end());
	copy(v.begin(),v.end(),ostream_iterator<int>(cout, " ")); cout << endl;
	random_shuffle(v.begin(),v.end());
	copy(v.begin(),v.end(),ostream_iterator<int>(cout, " ")); cout << endl;
    system("PAUSE");*/

	///*
	//* Lesson 6:  Compute all possible permutations of the data (change false to true to run)
	//*/
	//if(true){
	//	do{
	//		copy(v.begin(),v.end(),ostream_iterator<int>(cout, " ")); cout << endl;
	//	}while(next_permutation(v.begin(),v.end()));
	//}
	//
    //system("PAUSE");

	/*
	 * Lesson 7: Generate function (like a lambda function)
	 */
	/*generate(v.begin(),v.end(),GenRandNumber);
	copy(v.begin(),v.end(),ostream_iterator<int>(cout, " ")); cout << endl;

	system("PAUSE");*/


}