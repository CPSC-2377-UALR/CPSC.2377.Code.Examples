int main()
{

	//Lesson 1: A const variable must be assigned a variable when it is declared.
	const int x;

	//lesson 2: once assigned, the value cannot be changed.
	const int y = 3;
	y = 7;


	//good for values that don't change.
	const float pi = 3.14;
	const int speedOfLight = 3000000;

	return 0;
}