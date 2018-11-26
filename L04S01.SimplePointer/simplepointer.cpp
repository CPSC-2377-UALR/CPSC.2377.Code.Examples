
#include <iostream>

using namespace std;

int main(){


	int i = 5;//i[5] @ memory address 128adb83
	
	int* p; //p -->
	p = &i;// p --> i

	cout << &i << endl; //memory address of i
	cout << p << endl; // address stored in p same as MA stored in i;
	cout << i << endl; // value of i
	cout << *p << endl; // dereferences p and get's us the value stored in i;
	 //p --> i
	//*p --> i[5]

	system("PAUSE");

	return 0;
}