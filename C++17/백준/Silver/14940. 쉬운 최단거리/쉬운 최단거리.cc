#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<vector<int>> board(n, vector<int>(m));
	vector<vector<int>> count(n, vector<int>(m, -1));
	queue<pair<int, int>> q;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == 2) 
			{
				q.push({ i,j });
				count[i][j] = 0;
			}
			else if (board[i][j] == 0)
			{
				count[i][j] = 0;
			}
		}

	int dx[4] = { -1, 1, 0, 0 };
	int dy[4] = { 0, 0, -1, 1 };


	while (!q.empty())
	{
		int nx = q.front().first;
		int ny = q.front().second;

		q.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int x = nx + dx[dir];
			int y = ny + dy[dir];

			if (x < 0 || x >= n || y < 0 || y >= m)
				continue;

			if (board[x][y] == 1 && count[x][y] == -1)
			{
				q.push({ x, y });
				count[x][y] = count[nx][ny] + 1;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << count[i][j] << ' ';
		cout << '\n';
	}


	return 0;
}
