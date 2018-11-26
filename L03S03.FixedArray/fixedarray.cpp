#include<iostream>

using namespace std;

int main(){

	const int MAX_ARRAY_SIZE = 25;
	
	cout << "Enter an array size [1," << MAX_ARRAY_SIZE << "]: ";
	int userArraySize = 0;
	cin >> userArraySize; 

	int myArray[MAX_ARRAY_SIZE];

	for (int i = 0; i < userArraySize; i++) {
		myArray[i] = rand();
	}
	
	for(int i=0;i<userArraySize;i++){
		cout << myArray[i] << endl;
	}

	system("PAUSE");
	

	return 0;
}