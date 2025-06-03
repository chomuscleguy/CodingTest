#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

int main() {
	int M, N, H;
	cin >> M >> N >> H;

	vector<vector<vector<int>>> box(H, vector<vector<int>>(N, vector<int>(M)));
	queue<tuple<int, int, int>> q;

	for (int h = 0; h < H; h++) 
		for (int i = 0; i < N; i++) 
			for (int j = 0; j < M; j++)
			{
				cin >> box[h][i][j];
				if (box[h][i][j] == 1) 
					q.push({ h, i, j });
			}

	int dz[6] = { 0, 0, 0, 0, 1, -1 };
	int dx[6] = { 1, -1, 0, 0, 0, 0 };
	int dy[6] = { 0, 0, 1, -1, 0, 0 };

	while (!q.empty()) 
	{
		int z = get<0>(q.front());
		int x = get<1>(q.front());
		int y = get<2>(q.front());

		q.pop();

		for (int dir = 0; dir < 6; dir++)
		{
			int nz = z + dz[dir];
			int nx = x + dx[dir];
			int ny = y + dy[dir];

			if (nz < 0 || nz >= H || nx < 0 || nx >= N || ny < 0 || ny >= M)
				continue;

			if (box[nz][nx][ny] == 0) 
			{
				box[nz][nx][ny] = box[z][x][y] + 1;
				q.push({ nz, nx, ny });
			}
		}
	}

	int result = 0;

	for (int h = 0; h < H; h++)
		for (int i = 0; i < N; i++) 
			for (int j = 0; j < M; j++) 
			{
				if (box[h][i][j] == 0) 
				{
					cout << -1 << '\n';
					return 0;
				}
				result = max(result, box[h][i][j]);
			}

	cout << result - 1 << '\n';
	return 0;
}
