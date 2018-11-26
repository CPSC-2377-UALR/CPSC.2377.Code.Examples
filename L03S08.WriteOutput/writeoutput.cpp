/*
 * File: writeoutput.cpp
 * Author: Keith Bush (2013)
 */

#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ofstream fout;
	fout.open("iodata.txt");

	int dataSize=0, lineSize=0;
	float tmp=0.0, sum=0.0;
	
	cout << "Enter the number of datasets: ";
	cin >> dataSize;
	fout << dataSize << endl;

	for(int i=0; i<dataSize; i++){

		cout << "Enter the number of values of this set: ";
		cin >> lineSize;
		fout << lineSize << " ";
		cout << lineSize << " ";
		for(int j=0; j<lineSize; j++){
			cout << "Enter the next number: ";
			cin >> tmp;
			fout << tmp << " "; 
		}
		fout << endl;

	}
	fout.close();
	
	system("PAUSE");

	return 0;

}