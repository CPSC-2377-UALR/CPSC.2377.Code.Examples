#include<iostream>

using namespace std;

int main(){

	const int maxArraySize{ 25 };
	
	cout << "Enter an array size [1," << maxArraySize << "]: ";
	int userArraySize = 0;
	cin >> userArraySize; 

	int myArray[maxArraySize];

	for (int i = 0; i < userArraySize; i++) {
		myArray[i] = rand();
	}
	
	for(int i=0;i<userArraySize;i++){
		cout << myArray[i] << endl;
	}

	system("PAUSE");
	

	return 0;
}