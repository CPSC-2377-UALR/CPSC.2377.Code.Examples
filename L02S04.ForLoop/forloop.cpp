/*
 * File: forloop.cpp
 * Author: Keith Bush (2013)
 */

#include <iostream>

using namespace std;

int main(){
	/*
	1. Initializer
	2. Conditional
	3. What happens after each loop
	*/
	int numTimes = 0;
	cin >> numTimes;
	for(int i=0; i<numTimes; i++)
	{
		
		cout << i << endl;
	}
	
	int i = 0;
	while (i <= numTimes)
	{
		cout << i << endl;
		i++;
	}
	
	cout << endl;

	system("PAUSE");

	return 0; 

}