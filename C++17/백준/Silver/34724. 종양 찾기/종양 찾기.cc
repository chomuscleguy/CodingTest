#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	cin >> N >> M;

	vector<string> board(N);

	for (int i = 0;i < N;i++)
		cin >> board[i];

	pair<int, int> dir[4] = { {0,0},{0,1},{1,0},{1,1} };


	for (int i = 0;i < N - 1;i++)
	{
		for (int j = 0;j < M - 1;j++)
		{
			char cur = board[i][j];

			if (cur == '0')
				continue;

			int tumor = 1;

			for (pair<int, int> d : dir)
			{
				if (board[i + d.first][j + d.second] != cur)
					tumor = 0;
			}

			if (tumor)
			{
				cout << 1 << '\n';

				return 0;
			}
		}
	}

	cout << 0 << '\n';

	return 0;
}