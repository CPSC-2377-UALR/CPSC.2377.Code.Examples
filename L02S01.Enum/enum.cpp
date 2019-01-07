#include <iostream>
#include <random>

using namespace std;

int main()
{
	int enemyHealth = 10;
	enum class Attack { Miss, Hit, CriticalHit, NumAttacks };
	random_device rdev;
	default_random_engine e(rdev());
	normal_distribution<float> nd(1, .6);
	
	while (enemyHealth > 0)
	{
		cout << "The enemy still has " << enemyHealth << " health! Keep Fighting! \n";
		Attack attackRoll = (Attack)nd(e);

		switch (attackRoll)
		{
		case Attack::Miss:
			cout << "SWISH!" << endl;
			break;
		case Attack::CriticalHit:
			cout << "C-C-C-C-CRITICAL!" << endl;
			enemyHealth -= 2;
			break;
		case Attack::Hit:
			cout << "GOOD Hit!" << endl;
			enemyHealth--;
			break;
		default:
			cout << "DEATH Hit!" << endl;
			enemyHealth = 0;
		}
		
	}
	system("pause");


	return 0;
}