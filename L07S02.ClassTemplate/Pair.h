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

template< class T1, class T2>
Pair<T1,T2>::Pair():first(), second(){
}

template< class T1, class T2>
Pair<T1,T2>::Pair(T1 a, T2 b):first(a), second(b){

}

template< class T1, class T2>
T1 Pair<T1, T2>::getFirst(){
	return(first);
}

template< class T1, class T2>
T2 Pair<T1, T2>::getSecond(){
	return(second);
}

#endif