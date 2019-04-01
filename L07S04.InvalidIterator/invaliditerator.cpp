/*
* File: invaliditerator.cpp
* Author: Keith Bush (2013)
*
* Purpose: Demonstrates how deleting elements from a vector can be problematic, 
*          which stems from invalid iterators
*/
#include<iostream>
#include<vector>
#include<list>

using namespace std;

//Simple struct on which to test
struct SpaceShip{
	int value;
};

int main(){
	
	//Populate a vector of objects
	int N = 11;
	list<SpaceShip> v;
	//vector<SpaceShip>::iterator viter;
	auto viter = v.begin();
	for(int i=0;i<N;i++){
		SpaceShip SSS;
		SSS.value = i;
		v.push_back(SSS);
	}

	for(viter=v.begin();viter!=v.end();viter++){
		cout << (*viter).value << endl;
	}

	cout << "Start Erasing" << endl;
	/////*
	//// * Lesson 1: Dynamic deletion w/ iterators causes an ERROR!!!
	//// */
	//for(viter=v.begin();viter!=v.end();viter++){
	//	cout << (*viter).value;
	//	if( (*viter).value%2==0){
	//		viter = v.erase(viter);
	//		cout << ": ERASE" << endl;
	//	}else{
	//		cout << endl;
	//	}
	//}


	/*
	 * Lesson 2: The problem can be fixed with the set-up given below.
	 *           Comment out the code above and uncomment the code below to test
	 */
	for(viter=v.begin();viter!=v.end(); /*empty*/){
		cout << (*viter).value;
		if( (*viter).value%2==0){
			viter = v.erase(viter);
			cout << ": ERASE" << endl;
		}else{
			viter++;
			cout << endl;
		}
	}

	/*
	 *Lesson 3: Using "Auto"
	 */

	for (auto & ship : v)
	{
		cout << ship.value;
		if (ship.value % 2 == 0) {
			//ship = v.erase(ship);
			cout << ": ERASE" << endl;
		}
	}


	system("PAUSE");
}