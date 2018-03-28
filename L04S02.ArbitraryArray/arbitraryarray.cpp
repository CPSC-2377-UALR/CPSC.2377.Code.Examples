/*
 * File: arbitraryarray.cpp
 * Author: Keith Bush (2013)
 */

#include <iostream>
using namespace std;

int main(){

	cout << "Enter the size of array to create: ";
	int n;
	cin >> n;
	
	/* Allocate the memory */
	int* array = new int[n]; //array --> [][][][][][][][][][][][][]

	/* Initialize the memory with non-garbage values*/
	for(int i=0;i<n;i++){
		array[i] = 0;
	}

	for(int i = 0; i<n;i++){
		cout << i << " " << array[i] << endl;
	}
	
	system("PAUSE");

	/* Deallocate the memory*/
	delete [] array;
}
