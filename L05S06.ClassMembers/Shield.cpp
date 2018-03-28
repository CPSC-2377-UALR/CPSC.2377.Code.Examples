#include "Shield.h"	


Shield::Shield(){
	strength = 0;
}

Shield::Shield(int strength){
	this->strength = strength;
}

void Shield::setStrength(int strength){
	this->strength = strength;
}

int Shield::getStrength() const{
	return(strength);
}