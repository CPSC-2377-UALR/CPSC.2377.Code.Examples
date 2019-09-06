//File: review.cpp   (this is a line comment)

/*
 * Author: Keith Bush  (this is a block comment)
 */ 

#include<iostream> 
#include<cstdlib> 
				/* 
				 * The lines above are called include statements, which are examples of 
				 * preprocessor directives.  Source code preceded by the # symbol (called 
				 * the pound symbol or the hash symbol) is a preprocessor directive.  
				 * 
				 * Preprocessor directives modify the source code before formal compilation.
				 * The example statements above are include directives that tell the compiler
				 * to treat the contents of the files specified as if they appeared in the 
				 * source code.  Typically, these "header files" contain macros, constants, 
				 * and declarations of functions and user-defined types that will be used
				 * in the body of the current source code.  This is why the include statements
				 * are at the top of the file.
				 */

using namespace std;  
				/*  The using namespace directive applies the
				 * std namespace to the entire contents of this
				 * this file. (see namespace.cpp for details)
				 *
				 * Quiz: What would need to change in the remainder of 
				 * the program if this line was omitted?
				 */

int main(){
				 /* 
				  * int main(int argc, char** argv){  <- alternate form
				  *
				  * The main function returns an
				  * integer and takes two parameter
				  * arguments, an integer, argc, and a 
				  * pointer to a pointer to a char, argv.
				  * By convention, argc represents the
				  * number of command line arguments passed
				  * to the main function by the computer's
				  * operating system and argv represents
				  * C-style strings (the rows of char**)
				  * that are the text names of these
				  * arguments. 
				  *
				  * Note: int main() can be used in lieu of
				  * this function declaration to avoid using
				  * command line arguments
				  */
    
    int width, height;       
				 /*
			      * Variable declarations of type int.
			      * The 'names' of these variables are
			      * 'width' and 'height'. You must
			      * know the rules for legal names as
			      * well as scoping rules for names
			      * (see end of main function).
			      */

	cout << "Enter width: "; 
	cin >> width;
	cout << "Enter height: ";
	cin >> height;
	
    int area=0;
    for(int i=0;i<height;++i){//i++){ 
				/* 
				 * The for statement (as well as
				 * while and do while) is a loop
				 * construct.  The semantics of 
				 * this construct are:
				 * 
				 * 1) the initialization statement 
				 * 'int i=0'; is executed once upon
				 * execution of the loop.
				 *
				 * 2) the continuation condition
				 * 'i<height' is evaluated.
				 *
				 * If the continuation condition
				 * is true then the loop body is
				 * executed and the action statement 'i++'
				 * is executed.
				 * 
				 * The loop then returns to step (2)
				 *
				 * If the continuation condition is 
				 * false, the program exits the loop.
				 *
				 * Quiz: What effect does changing the
				 * action statement above to '++i' have
				 * on the execution of the loop?
				 */
      
      area+=width; 
				/* 
				 * Combined addition-assignment operator.  This
				 * operator is equivalent to the statement
				 * 'area = area + width'.
				 */
      
    }
    
    cout << "area=" << area << endl;
				/*
				 * The standard output stream is cout.
				 * The output stream operator, <<,
				 * takes data from the program and
				 * displays it to the standard output, 
				 * usually a console.  An easy way
				 * to remember that the output stream
				 * operator is composed of left angle
				 * brackets, '<<', instead of right angle
				 * brackets, '>>', is to think of them
				 * as arrows pointing the direction of
				 * information flow. 
				 */

	system("PAUSE");

  return 0; 
				/* 
				 * Because main is a function with return type int it must
				 * return an integer value.
				 */
}

/*
  * Braces define the statement scope, or for combining multiple statements
  * into a compound statement.  Everything within the brace is considered
  * at the same scope---regions of the program that determine the lifetime,
  * and visibility of names.
  */


/*
 * One problem early on in programming is know what to call
 * the symbols that we use in C++.  Here is a short list of
 * terms that you can use as a reference.
 *
 *  . dot 
 *  * asterisk or star
 *  & ampersand
 *  <> angle bracket (left)
 *  [ ]bracket (left)
 *  { curly bracket or brace (left)
 *  ( parenthesis (left)
 *  ... ellipsis
 *  / forward slash
 * \ backslash
 * ! bang or not
 * ^ hat or caret
 * ~ tilde
 * _ underscore
 *
 * Another problem is knowing the names of the operators
 *
 * = assignment operator
 * :: scope resolution operator
 * ++ increment operator
 * -- decrement operator
 * +,-,*,/,% arithmetic operators (add, substract, multiply, divide, modulus)
 * ==,>,<,>=,<=,!= relational operators (equal, greater than, less than,...)
 * !,&&,|| logical operators (not, and, or)
 * ? conditional operator
 * , comma operator
 *
 * Note, there are more operators that you will learn in this course.
 *
 * You should also know the operator precedences (Appendix 2 of Savitch has
 * a chart that covers most of the operators you will need.  
 */