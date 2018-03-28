/*
 * File: Shield.h
 * Author: Keith Bush (2012)
 */
#ifndef SHIELD_H
#define SHIELD_H

class Shield{

public:
	Shield();				//default constructor
	Shield(int);            //conversion constructor
	void setStrength(int);
	int getStrength() const;

private: 
	int strength;

};

#endif