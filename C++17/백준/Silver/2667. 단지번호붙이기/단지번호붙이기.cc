#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<vector<int>> board(N, vector<int>(N));
	vector<vector<bool>> visited(N, vector<bool>(N));

	string input;

	for (int i = 0; i < N; i++)
	{
		cin >> input;

		for (int j = 0; j < N; j++)
		{
			board[i][j] = input[j] - '0';

			if (input[j] == '0')
				visited[i][j] = true;
		}
	}

	int dx[] = { -1, 1, 0, 0 };
	int dy[] = { 0, 0, -1, 1 };

	vector<int> result;
	queue<pair<int, int>> q;

	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < N; y++)
		{
			if (board[x][y] != 0 && !visited[x][y])
			{
				visited[x][y] = true;
				q.push({ x, y });
				int count = 1;

				while (!q.empty())
				{
					int cx = q.front().first;
					int cy = q.front().second;

					q.pop();

					for (int dir = 0; dir < 4; dir++)
					{
						int nx = cx + dx[dir];
						int ny = cy + dy[dir];

						if (nx < 0 || ny < 0 || nx >= N || ny >= N)
							continue;

						if (board[nx][ny] != 0 && !visited[nx][ny])
						{
							q.push({ nx,ny });
							visited[nx][ny] = true;
							count++;
						}
					}
				}
				result.push_back(count);
			}
		}
	}

	sort(result.begin(), result.end());

	cout << result.size() << '\n';

	for (int num : result)
		cout << num << '\n';

	return 0;
}