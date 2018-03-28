/*
 * File: twodimensionalarray.cpp
 * Author: Keith Bush (2013)
 */

#include <iostream>
using namespace std;

int main(){
	int n = 5;
	int** array2D = new int*[n]; // array2D --> [int*][int*][int*][int*][int*]
	
	for(int i=0;i<n;i++){
		array2D[i] = new int[n]; // array2d --> [-->[][][][][]][-->[][][][][]][-->[][][][][]][-->[][][][][]][-->[][][][][]]
		for(int j=0;j<n;j++){
			array2D[i][j] = 0;
		}
	}

	//Check that this is correct
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << array2D[i][j] << " ";
		}cout << endl; //return after each row finishes
	}

	system("PAUSE");

	return 0;

}
