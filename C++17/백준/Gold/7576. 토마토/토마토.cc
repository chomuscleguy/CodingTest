#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int M, N;
	cin >> M >> N;

	vector<vector<int>>box(N, vector<int>(M));
	queue<pair<int, int>> q;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
		{
			cin >> box[i][j];
			if (box[i][j] == 1)
				q.push({ i, j });
		}

	int dx[4] = { 1, -1, 0, 0 };
	int dy[4] = { 0, 0, 1, -1 };

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;

		q.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = x + dx[dir];
			int ny = y + dy[dir];

			if (nx < 0 || nx >= N || ny < 0 || ny >= M)
				continue;

			if (box[nx][ny] == 0)
			{
				box[nx][ny] = box[x][y] + 1;
				q.push({ nx, ny });
			}
		}
	}

	int result = 0;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
		{
			if (box[i][j] == 0)
			{
				cout << -1 << '\n';
				return 0;
			}
			result = max(result, box[i][j]);
		}

	cout << result - 1 << '\n';

	return 0;
}
