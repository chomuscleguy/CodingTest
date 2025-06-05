#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<vector<char>> district(N, vector<char>(N));
	vector<vector<bool>> visitedNormal(N, vector<bool>(N));
	vector<vector<bool>> visitedBlind(N, vector<bool>(N));

	string str;

	for (int i = 0; i < N; i++)
	{
		cin >> str;

		for (int j = 0; j < N; j++)
			district[i][j] = str[j];
	}

	int normal = 0;
	int blind = 0;

	int dx[4] = { 0, 0, 1, -1 };
	int dy[4] = { 1, -1, 0 ,0 };

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (!visitedNormal[i][j])
			{
				normal++;
				queue<pair<int, int>> q;
				q.push({ i, j });
				visitedNormal[i][j] = true;
				char color = district[i][j];

				while (!q.empty())
				{
					int x = q.front().first;
					int y = q.front().second;
					q.pop();

					for (int d = 0; d < 4; d++)
					{
						int nx = x + dx[d];
						int ny = y + dy[d];

						if (nx < 0 || ny < 0 || nx >= N || ny >= N)
							continue;
						if (visitedNormal[nx][ny])
							continue;
						if (district[nx][ny] != color)
							continue;

						visitedNormal[nx][ny] = true;
						q.push({ nx, ny });
					}
				}
			}
		}
	}


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (!visitedBlind[i][j]) 
			{
				blind++;
				queue<pair<int, int>> q;
				q.push({ i, j });
				visitedBlind[i][j] = true;
				char color = district[i][j];

				while (!q.empty())
				{
					int x = q.front().first;
					int y = q.front().second;
					q.pop();

					for (int d = 0; d < 4; d++)
					{
						int nx = x + dx[d];
						int ny = y + dy[d];

						if (nx < 0 || ny < 0 || nx >= N || ny >= N)
							continue;
						if (visitedBlind[nx][ny])
							continue;

						char next = district[nx][ny];
						bool same = (color == next) || ((color == 'R' || color == 'G') && (next == 'R' || next == 'G'));

						if (!same)
							continue;

						visitedBlind[nx][ny] = true;
						q.push({ nx, ny });
					}
				}
			}
		}
	}

	cout << normal << ' ' << blind << '\n';

	return 0;
}
