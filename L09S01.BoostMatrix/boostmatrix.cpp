/*
 * File: boostmatrix.cpp
 * Author: Keith Bush (2013)
 *
 * Purpose: Demonstrates the use of the BOOST ublas library to do Linear Algebra easily within C++.
 */

/*
 * Lesson 1: You must link the BOOST headers to your program: see VC++ header path
 *           within the project properties.
 */
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/matrix_proxy.hpp>
#include <boost/numeric/ublas/io.hpp>
 
using namespace std;

void main (){

  using namespace boost::numeric::ublas;

  /*
   * Lesson 1: Matrices are easy to construct, populate, and view using overloaded operators
   */
  matrix<double> m (2, 2);
  for (unsigned i = 0; i < m.size1 (); ++ i){
    for (unsigned j = 0; j < m.size2 (); ++ j){
      m (i, j) = 3 * i + j;
    }
  }
  cout << m << endl;

  matrix<double> n (2, 2);
  for (unsigned i = 0; i < n.size1 (); ++ i){
    for (unsigned j = 0; j < n.size2 (); ++ j){
      n (i, j) = 4 * (i+1) + j;
    }
  }
  cout << n << endl;

  /*
   * Lesson 2: Basic Linear Algebra operations (matrix-matrix or matrix-vector mutliplication) are easy with functions
   */
  matrix<double> r = prod(m,n);
  cout << r << endl;

   /*
   * Lesson 3: Slices of matrices (rows/columns) are easy to extract with matrix_proxies
   */
   for (unsigned i = 0; i < m.size1 (); ++ i) {
    matrix_row<matrix<double> > mr (m, i);
    cout << "row " << i << ": " << mr << endl;
  }

  system("PAUSE");

}