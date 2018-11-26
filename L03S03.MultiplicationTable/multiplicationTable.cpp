/*
 * File: multiplicationTable.cpp
 * Author: Keith Bush (2013)
 */

#include <iostream>
#include <iomanip>
using namespace std;
void printTable(int table[][4],int rows, int cols)
{
	for (int i = 0; i<rows; i++) {
		for (int j = 0; j<cols; j++) {
			cout << setfill(' ') << setw(3) << table[i][j] << " ";  //Nice formatting
																	//cout << table[i][j] << " ";                           //Unformatted
		}cout << endl;
	}
}
int main(){

    const int rows=3, cols=4;
	int table[rows][cols]{  };
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			table[i][j] = (i+1)*(j+1);
		}
	}
	printTable(table, rows, cols);
	

	system("PAUSE");

	return 0;

}