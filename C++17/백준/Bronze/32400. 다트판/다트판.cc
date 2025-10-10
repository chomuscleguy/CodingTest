#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> board(20);

	float sum = 0;

	for (int i = 0; i < board.size(); i++)
	{
		cin >> board[i];

		if (board[i] == 20)
		{
			cin >> board[(i + 1) % 20];
			sum = (board[i] + board[(20 + i - 1) % 20] + board[(i + 1) % 20]) / 3.0f;
			break;
		}
	}

	cout << (10.5 > sum ? "Bob" : sum == 10.5 ? "Tie" : "Alice");

	return 0;
}