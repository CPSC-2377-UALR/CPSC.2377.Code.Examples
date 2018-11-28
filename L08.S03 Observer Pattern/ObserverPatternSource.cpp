#include <vector>
#include <iostream>
#include "Enemy.h"
#include "Player.h"

using namespace std;

int main()
{
	vector<Player*> players {new Player("player 1"), new Player("player 2")};

	Enemy e1(players[0]);
	Enemy e2(players[0]);

	Enemy e3(players[1]);
	while (!players.empty())
	{
		for (auto player : players)
		{
			cout << player->name << ": (" << player->strength << ", " << player->health << ")\n";
			cout << "(a)ttack or (h)eal";
			char command;
			cin >> command;
			player->update(command);
		}
		for (auto player=players.begin(); player!=players.end();)
		{
			if ((*player)->enemiesToNotify.empty() && (*player)->health <= 0)
				player = players.erase(player);
			else
			{
				player++;
			}
		}
	}
}