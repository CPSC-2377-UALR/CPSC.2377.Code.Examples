#include <iostream>
#include "Martian.h"

using namespace std;

//Initialize the static members independently of the class!!!
int Martian::population = 0;
const int Martian::speedOfLight = 29980000; 


Martian::Martian(){
	population++;
}

Martian::~Martian(){
	population--;
}

int Martian::getPopulation(){
	return(population);
}

int Martian::getSOL(){
	return(speedOfLight);
}

int Martian::getPopulationStatic(){
	return(population);
}
