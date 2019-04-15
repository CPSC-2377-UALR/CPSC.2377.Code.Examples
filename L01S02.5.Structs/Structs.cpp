#include <iostream>

using namespace std;

struct Coordinates
{
	float x{ 0.0f };
	float y{ 0.0f };
};

int main()
{
	//lesson 1: creating an instance of the struct;
	Coordinates point1;
	
	//lesson 2: setting initial vaules using uniform initialization
	Coordinates point2{ 1, 5 };
		
	//lesson 3: using the dot operator!
	//cout << point << endl; //<< doesn't know how to deal with user defined types!
	cout << "(" << point2.x << ", " << point2.y << ")" << endl;
	point2.x = 3;
	point2.y = 4;
	cout << "(" << point2.x << ", " << point2.y << ")" << endl;

}