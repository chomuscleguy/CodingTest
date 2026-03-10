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

	for (int i = 0; i < N; i++)
		cin >> board[i];

	vector<pair<int, int>> ans;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (board[i][j] != '.')
				continue;

			if ((j == 0 || board[i][j - 1] == '#') && j + 2 < M && board[i][j + 1] == '.' && board[i][j + 2] == '.')
			{
				ans.push_back({ i + 1, j + 1 });
				continue;
			}

			if ((i == 0 || board[i - 1][j] == '#') && i + 2 < N && board[i + 1][j] == '.' && board[i + 2][j] == '.')
				ans.push_back({ i + 1, j + 1 });
		}
	}

	cout << ans.size() << '\n';

	for (pair<int, int>& p : ans)
		cout << p.first << " " << p.second << '\n';

	return 0;
}