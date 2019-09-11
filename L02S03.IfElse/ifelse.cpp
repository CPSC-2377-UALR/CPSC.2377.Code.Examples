#include <iostream>

using namespace std;

int main(){

	int health;
	cin >> health;
	//bool isTrue = true;
	/*if(health == 0)
	{
		cout << "Fatality!" << endl;
	}
	else
	{
		if(health==1)
		{
			cout << "Finish him!" << endl;
		}
		else
		{
			cout << "Fight!" << endl;
		}
	}*/

	enum class LIFE {DEAD, ALMOST_DEAD};

	switch ((LIFE)health)
	{
	case LIFE::DEAD:
		cout << "Fatality!" << endl;
		break;
	case LIFE::ALMOST_DEAD:
		cout << "Finish him!" << endl;
		//break;
	default:
		cout << "Fight!" << endl;
		break;
	}

	system("PAUSE");

	return 0;

}