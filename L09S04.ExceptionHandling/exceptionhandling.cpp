/*
* File: exceptionhandling.cpp
* Author: Keith Bush (2013)
*
* Purpose: Demonstrates how to use exception handling to gracefully manage 
*          programming errors.
*/

#include <fstream>
#include <iostream>
#include <exception>

using namespace std;

//User-defined class derives from C++ Exception
class MyException: public exception{
	virtual const char* what() const throw(){
		return "My exception happened";
	}
};

void main () {

	/*
	 * Lesson 1: When doing risky code (i.e., code that can fail) put this
	 *           code inside a "try block".
	 */
	try {

		//Try to open the file
		ifstream fin;
		fin.open("./data.txt");

		/*
		 * Lesson 2: If code fails (e.g., no file exists) throw an exception explaining what happened.
		 */
		if(fin==NULL){
			MyException m;
			throw m;

			/*
			 * Lesson 3: Alternatively, you could throw any type
			 * e.g., throw 10;
			*/
			throw 10;

		}else{		
			//Manipulate the file
		}

	}//end try

	//cout << "This is program code" << endl;

	/*
	 * Lesson 4: The exception will be caught by the first block with matchin catch prototype
	 */

	//Skips this
	catch(int i){
		cout << "Inside catch of integer" << endl;
		cout << i << endl;
	}

	//Caught here
	catch (exception& e){

		cout << e.what() << '\n';
	}

	system("PAUSE");
}