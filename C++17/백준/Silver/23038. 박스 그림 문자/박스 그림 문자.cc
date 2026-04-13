#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	cin >> N >> M;

	vector<string> board(3 * N);

	for (int i = 0; i < 3 * N; i++)
		cin >> board[i];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if ((i + j) % 2 == 0)
				continue;

			int row = i * 3;
			int col = j * 3;

			if (i > 0 && board[row - 1][col + 1] == '#')
				board[row][col + 1] = '#';

			if (i < N - 1 && board[row + 3][col + 1] == '#')
				board[row + 2][col + 1] = '#';

			if (j > 0 && board[row + 1][col - 1] == '#')
				board[row + 1][col] = '#';

			if (j < M - 1 && board[row + 1][col + 3] == '#')
				board[row + 1][col + 2] = '#';


			if (board[row][col + 1] == '#' || board[row + 2][col + 1] == '#' || board[row + 1][col] == '#' || board[row + 1][col + 2] == '#')
				board[row + 1][col + 1] = '#';
		}
	}

	for (int i = 0; i < 3 * N; i++)
		cout << board[i] << "\n";

	return 0;
}