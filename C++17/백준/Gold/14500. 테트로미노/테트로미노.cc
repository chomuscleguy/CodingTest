#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	vector<vector<int>> board(N, vector<int>(M));

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> board[i][j];

	int maxSum = 0;

	int tetro[19][4][2] = 
	{
		{{0,0},{0,1},{0,2},{0,3}},
		{{0,0},{1,0},{2,0},{3,0}},

		{{0,0},{0,1},{1,0},{1,1}},

		{{0,0},{1,0},{2,0},{2,1}},
		{{0,0},{0,1},{0,2},{1,0}},
		{{0,0},{0,1},{1,1},{2,1}},
		{{0,2},{1,0},{1,1},{1,2}},

		{{0,1},{1,1},{2,0},{2,1}},
		{{0,0},{1,0},{1,1},{1,2}},
		{{0,0},{0,1},{1,0},{2,0}},
		{{0,0},{0,1},{0,2},{1,2}},

		{{0,1},{0,2},{1,0},{1,1}},
		{{0,0},{1,0},{1,1},{2,1}},
		{{0,0},{0,1},{1,1},{1,2}},
		{{0,1},{1,0},{1,1},{2,0}},

		{{0,0},{0,1},{0,2},{1,1}},
		{{0,1},{1,0},{1,1},{2,1}},
		{{0,1},{1,0},{1,1},{1,2}},
		{{0,0},{1,0},{1,1},{2,0}}
	};

	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < M; x++)
		{
			for (int t = 0; t < 19; t++)
			{
				int sum = 0;
				bool valid = true;

				for (int b = 0; b < 4; b++)
				{
					int ny = y + tetro[t][b][0];
					int nx = x + tetro[t][b][1];

					if (ny < 0 || ny >= N || nx < 0 || nx >= M)
					{
						valid = false;
						break;
					}

					sum += board[ny][nx];
				}

				if (valid)
					maxSum = max(maxSum, sum);
			}
		}
	}

	cout << maxSum << '\n';

	return 0;
}
