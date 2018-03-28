/*
* File: nonmodifying.cpp
* Author: Keith Bush (2013)
*
* Purpose: Demonstrates the use of various types of nonmodifying algorithms.  Note the common
*          use of iterators.
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
		if(!fin==NULL){
			MyException m;
			throw m;
	
			/*
			 * Lesson 3: Alternatively, you could throw any type
			*/
			//throw 10;

		}else{		
			//Manipulate the file
		}

	}

	/*
	 * Lesson 4: The exception will be caught by the first block with matchin catch prototype
	 */

	//Skips this
	catch(int i){
		cout << i << endl;
	}

	//Caught here
	catch (exception& e){
		cout << e.what() << '\n';
	}
	system("PAUSE");
}