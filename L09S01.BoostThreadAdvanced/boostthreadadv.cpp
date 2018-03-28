/*
* File: boostthreadadv.cpp
* Author: Keith Bush (2014)
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
}

void main(){

	unsigned BigNum = 1E8;

	/*
	* Construct computational tasks
	*/
	unsigned Ntasks = 3;
	vector<Task> tasks;
	for(unsigned i=0;i<Ntasks;i++){
		tasks.push_back(Task(i,BigNum));
	}

	/*
	* Construct thread_group (a bit more primitize than a thread pool) to independently execute these tasks in parallel
	*/
	std::cout << "Starting Threaded Version" << std::endl;
	boost::thread_group thread_group;

    clock_t startTime = clock();
    unsigned Nthreads = Ntasks;
	for(unsigned i=0;i<Nthreads;i++){
		thread_group.create_thread(boost::bind(&Task::LongFunction, tasks.back()));//,&ioService));
        tasks.pop_back();
	}

    /*
     * Combine all the threads once completed
     */ 
	thread_group.join_all();
	std::cout << "Threaded: " << double(clock()-startTime)/(double)CLOCKS_PER_SEC << " seconds." << endl;

	/*
	* Compared against the same functions executed in sequence
	*/
	std::cout << "Starting Sequential Version" << std::endl;
	startTime = clock();
	for(unsigned i=0;i<Ntasks;i++){
		longFunction(i,BigNum);
	}
	std::cout << "Sequential: " <<  double(clock()-startTime)/(double)CLOCKS_PER_SEC << " seconds." << endl;

	system("PAUSE");
}


