/*
 * File: readinput.cpp
 * Author: Keith Bush (2013)
 */

#include <iostream>
#include <fstream>

using namespace std;

int main(){

	fstream fin;
	fin.open("iodata.txt",ios::in);

	int dataSize=0, lineSize=0;
	float tmp=0.0, sum=0.0;
	
	fin >> dataSize;  
	//while (!fin.eof()) {
	for(int i=0; i<dataSize; i++){
		fin >> lineSize;
		for(int j=0; j<lineSize; j++){
			fin >> tmp;
			sum+=tmp;
		}
	}

	fin.close();

	cout << "Sum: " << sum << endl;

	system("PAUSE");

	return 0;

}