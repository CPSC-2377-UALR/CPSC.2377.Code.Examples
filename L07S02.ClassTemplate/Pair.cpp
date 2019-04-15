#include "Pair.h"

template< class T1, class T2>
Pair<T1, T2>::Pair() :first(), second() {
}

template< class T1, class T2>
Pair<T1, T2>::Pair(T1 a, T2 b) : first(a), second(b) {

}

template< class T1, class T2>
T1 Pair<T1, T2>::getFirst() {
	return(first);
}

template< class T1, class T2>
T2 Pair<T1, T2>::getSecond() {
	return(second);
}