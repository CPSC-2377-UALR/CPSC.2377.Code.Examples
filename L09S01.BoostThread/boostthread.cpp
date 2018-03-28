/*
* File: boostthread.cpp
* Author: Keith Bush (2013)
*
* Purpose: Demonstrates the use of the BOOST thread library to compute with multiple threads.
*/
#include <iostream>
#include <vector>
#include <cstdlib>

/* 
 * ***IMPORTANT***: you must link the BOOST headers AS WELL AS THE lib32 library in VC++ paths
 */
#include <cmath>
#include <ctime>
#include <boost/thread.hpp>
#include <boost/bind.hpp>

using namespace std;

class Task{
public:
	Task(int id,unsigned int BigNum){this->id=id;this->BigNum=BigNum;}
	void LongFunction(){ 
		double temp;
		for(unsigned int i = 1; i < BigNum; i++){
			temp = sin(i) / i;
		}
		//cout << endl << "Thread: " << id << " done with LongFunction" << endl;
	}
private: 
	int id;
	unsigned int BigNum;
};

void longFunction(int id, unsigned int BigNum){ 

	double temp;
	for(unsigned int i = 1; i < BigNum; i++){
		temp = sin(i) / i;
	}
	//cout << endl << "call " << id << ": done with longFunction" << endl;
}

void main(){

	unsigned int BigNum = 1E8;


	/*
	* Lesson 1: Construct computational tasks
	*/

	Task task1(1,BigNum);
	Task task2(2,BigNum);
	Task task3(3,BigNum);

	/*
	* Lesson 2: Construct threads to independently execute these tasks in parallel
	*/
    std::cout << "Starting Threads" << std::endl;
    clock_t startTime = clock();
	boost::thread thread1(boost::bind(&Task::LongFunction, task1));
	boost::thread thread2(boost::bind(&Task::LongFunction, task2));
	boost::thread thread3(boost::bind(&Task::LongFunction, task3));

	/* 
	* Lesson 4: Require the forked threads to rejoin the main thread
	*/
	thread1.join();
	thread2.join();
	thread3.join();
    cout << "Threaded: " << double(clock()-startTime)/(double)CLOCKS_PER_SEC << " seconds." << endl;

    	/*
	 * Lesson 3: Require the main thread to execute the same functions in sequence
	 */
    std::cout << "Starting Sequence" << std::endl;
    startTime = clock();
	longFunction(1,BigNum);
	longFunction(2,BigNum);
	longFunction(3,BigNum);
    cout << "Sequential: " <<  double(clock()-startTime)/(double)CLOCKS_PER_SEC << " seconds." << endl;

	system("PAUSE");
}


