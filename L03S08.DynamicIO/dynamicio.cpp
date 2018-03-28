/*
 * File: dynamicio.cpp
 * Author: Keith Bush (2013)
 */

#include <fstream>
#include <iostream>

using namespace std;

int main(){

	fstream fio;

	/*write out section*/
	fio.open("tmp.txt",ios::out);
	int truth = 1743;
	fio << truth;
	fio.close();

	/*read in section*/
	fio.open("tmp.txt",ios::in);
	int mystery;
	fio >> mystery;
	cout << mystery << endl;

	system("PAUSE");
	return 0;
}