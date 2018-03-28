

#include <iostream>
using namespace std;

int main(){

	int* i = new int;
	int* j = new int;

	*i = 5; //i --> MA1[5]
	*j = 7;// j ---> MA2[7]
	delete i; // i -->
	i = j;// i --> MA2[7] <-- j

	system("PAUSE");

	return 0;
}
