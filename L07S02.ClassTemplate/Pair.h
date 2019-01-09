#ifndef PAIR_H
#define PAIR_H

#include<iostream>

using namespace std;

template< class T1, class T2 >
class Pair{

private:
	T1 first;
	T2 second;

public:
	Pair();
	Pair(T1 a, T2 b);
	T1 getFirst();
	T2 getSecond();
};



#endif