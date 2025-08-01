#include <iostream>

using namespace std;

int result(char player1, char player2)
{
	if (player1 == player2)
		return 0;
	if ((player1 == 'R' && player2 == 'S') ||
		(player1 == 'S' && player2 == 'P') ||
		(player1 == 'P' && player2 == 'R'))
		return 1;
	else
		return -1;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		int score = 0;

		while (n--)
		{
			char player1, player2;
			cin >> player1 >> player2;

			score += result(player1, player2);
		}

		cout << (score == 0 ? "TIE" : (score > 0 ? "Player 1" : "Player 2")) << '\n';
	}

	return 0;
}