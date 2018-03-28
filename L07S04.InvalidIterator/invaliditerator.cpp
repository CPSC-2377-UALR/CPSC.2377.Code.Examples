/*
* File: invaliditerator.cpp
* Author: Keith Bush (2013)
*
* Purpose: Demonstrates how deleting elements from a vector can be problematic, 
*          which stems from invalid iterators
*/
#include<iostream>
#include<vector>

using namespace std;

//Simple class on which to test
class SpaceShip{
public:
	SpaceShip(int value){
		this->value = value;
	}
	int getValue(){return(value);}
private:
	int value;
};

int main(){

	//Populate a vector of objects
	int N = 11;
	vector<SpaceShip*> v;
	vector<SpaceShip*>::iterator viter;
	for(int i=0;i<N;i++){
		v.push_back(new SpaceShip(i));
	}

	for(viter=v.begin();viter!=v.end();viter++){
		cout << (*viter)->getValue() << endl;
	}

	cout << "Start Erasing" << endl;
	/////*
	//// * Lesson 1: Dynamic deletion w/ iterators causes an ERROR!!!
	//// */
	/*for(viter=v.begin();viter!=v.end();viter++){
		cout << (*viter)->getValue();
		if( (*viter)->getValue()%2==0){
			viter = v.erase(viter);
			cout << ": ERASE" << endl;
		}else{
			cout << endl;
		}
	}
*/

	/*
	 * Lesson 2: The problem can be fixed with the set-up given below.
	 *           Comment out the code above and uncomment the code below to test
	 */
	for(viter=v.begin();viter!=v.end(); /*empty*/){
		cout << (*viter)->getValue();
		if( (*viter)->getValue()%2==0){
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

	for (auto ship : v)
	{
		cout << ship->getValue();
		if( ship -> getValue()%2==0){
			ship = v.erase(ship);
			cout << ": ERASE" << endl;
	}


	system("PAUSE");
}