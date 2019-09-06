/*
 * File: namespace.cpp
 * Author: Keith Bush (2013)
 */

#include<iostream>
#include <string>

/*
 * The namespace is a mysterious part of beginner C++ programming
 * because we don't use it for simple programs. It's unnecessary.  
 *
 * Namespaces are valuable because they allow names of variables to
 * have different meanings in different contexts.  Short, simple
 * variable names are reused often in large programs and the namespace
 * allows their meaning to remain separate even if they are used in the
 * same code.
 *
 * Combined with the scope operator, denoted as ::, the namespace
 * can be powerful.
 */

/*
 * Name spaces are defined in namespace blocks. For example:
 */

namespace biology
{  
	std::string plantName{ "iris" };
	int getID()
	{
		return(1);
	}

}

namespace industry
{  
	std::string  plantName{ "refinery" };
	int getID()
	{
		return(101);
	}
}

using namespace std;
//using namespace industry;

/*
 * The using directive allows a particular namespace to be applied
 * to all the code in a source file.  The std namespace is the namespace
 * used for the basic C++ programming tools, such as the standard input
 * and output streams cout and cin.  Therefore, we almost always use
 * the namespace std in our programs.
 *
 * We can also apply the using directive to other namespaces, such
 * as our user-defined namespaces.
 */

int main(){

  /*
   * To demonstrate the namespace functionality we will print
   * some data to the standard output stream.
   */
  std::cout << industry::plantName  << std::endl;

  /*
   * We can now alter the context of the variable name "plantName"
   * by changing its scope to a different namespace using the scope
   * operator, ::, as follows:
   */
  cout << biology::plantName << endl;



  /*
   * Namespaces can also be used to change the scope of
   * for declarations of functions and datatypes
   */
  cout << "Plant ID: " << getID() << endl;
  cout << "Plant ID: " << biology::getID() << endl;

  system("PAUSE");
  /*
   * Compile and run this program and note the behavior.
   */

}
