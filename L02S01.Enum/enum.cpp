#include <iostream>
#include <random>

using namespace std;

int main()
{
	int enemyHealth = 10;
	enum ATTACK { MISS, HIT, CRITICAL_HIT, NUM_ATTACKS };
	random_device rdev;
	default_random_engine e(rdev());
	normal_distribution<float> nd(1, .6);
	
	while (enemyHealth > 0)
	{
		cout << "The enemy still has " << enemyHealth << " health! Keep Fighting! \n";
		int attackRoll = (int)nd(e);

		switch (attackRoll)
		{
		case MISS:
			cout << "SWISH!" << endl;
			break;
		case CRITICAL_HIT:
			cout << "C-C-C-C-CRITICAL!" << endl;
			enemyHealth -= 2;
			break;
		case HIT:
			cout << "GOOD HIT!" << endl;
			enemyHealth--;
			break;
		default:
			cout << "DEATH HIT!" << endl;
			enemyHealth = 0;
		}
		
	}
	system("pause");


	return 0;
}