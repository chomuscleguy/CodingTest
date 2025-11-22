#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	vector<vector<int>> board(N, vector<int>(N));

	int parity = -1;

	for (int i = 0; i < N;i++)
		for (int j = 0; j < N; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == 2)
				parity = (i + j) & 1;
		}

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (board[i][j] == 1)
				if (((i + j) & 1) == parity)
				{
					cout << "Kiriya" << '\n';
					return 0;
				}

	cout << "Lena" << '\n';
	return 0;
}