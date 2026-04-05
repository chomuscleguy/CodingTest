#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int R, C;
	cin >> R >> C;

	vector<string> board(R);

	for (int i = 0;i < R;i++)
		cin >> board[i];

	pair<int, int> dir[4] = { {0,0},{0,1},{1,0},{1,1} };
	int ans[5] = {};

	for (int i = 0;i < R - 1;i++)
	{
		for (int j = 0; j < C - 1; j++)
		{
			int cnt = 0;

			for (pair<int, int> p : dir)
			{
				char cur = board[i + p.first][j + p.second];

				if (cur == '#')
				{
					cnt = -1;
					break;
				}

				if (cur == 'X')
					cnt++;
			}

			if (cnt == -1) 
				continue;

			ans[cnt]++;
		}
	}

	for (int n : ans)
		cout << n << '\n';

	return 0;
}