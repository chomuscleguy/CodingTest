#include <iostream>
#include <vector>
#include <string>

using namespace std;

int n, m;

vector<string> campus;
vector<vector<bool>> visited;

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
int result = 0;

void DFS(int x, int y)
{
	visited[x][y] = true;

	if (campus[x][y] == 'P')
		result++;

	for (int dir = 0; dir < 4; dir++)
	{
		int nx = x + dx[dir];
		int ny = y + dy[dir];

		if (nx >= 0 && nx < n && ny >= 0 && ny < m)
			if (!visited[nx][ny] && campus[nx][ny] != 'X')
				DFS(nx, ny);
	}
}

int main()
{
	cin >> n >> m;
	campus.resize(n);
	visited.resize(n, vector<bool>(m, false));

	int posX = 0, posY = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> campus[i];

		for (int j = 0; j < m; ++j)
		{
			if (campus[i][j] == 'I')
			{
				posX = i;
				posY = j;
			}
		}
	}

	DFS(posX, posY);

	if (result == 0)
		cout << "TT\n";
	else
		cout << result << '\n';

	return 0;
}
