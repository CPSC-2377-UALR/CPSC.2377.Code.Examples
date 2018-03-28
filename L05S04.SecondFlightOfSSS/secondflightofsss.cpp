/*
 * File: secondflightofsss.cpp
 * Author: Keith Bush (2012)
 */
#include <iostream>
#include "SimpleSpaceShip.h"

using namespace std;

int main(){

	SimpleSpaceShip sss1;
	sss1.print();	

	SimpleSpaceShip sss2(21.5,-1.0,5);
	sss2.print();

   SimpleSpaceShip* sptr = new SimpleSpaceShip(13.4,-26.2,0);

   // (*sptr).print();
    sptr->print();

	system("PAUSE");

	return 0; 
}