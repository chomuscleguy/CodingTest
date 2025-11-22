#include <iostream>

using namespace std;

struct card
{
	int atk = 0;
	int health = 0;
};

int main()
{
	card player[2];

	for (int i = 0; i < 2; i++)
		cin >> player[i].atk >> player[i].health;

	int turnsA = (player[1].health + player[0].atk - 1) / player[0].atk;
	int turnsB = (player[0].health + player[1].atk - 1) / player[1].atk;

	if (turnsA == turnsB)
		cout << "DRAW" << '\n';
	else if (turnsA < turnsB)
		cout << "PLAYER A" << '\n';
	else
		cout << "PLAYER B" << '\n';

	return 0;
}