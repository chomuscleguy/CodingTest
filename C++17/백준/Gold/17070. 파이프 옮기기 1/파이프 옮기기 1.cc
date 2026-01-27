#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	int board[16][16] = {};
	long long dp[16][16][3] = {};

	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> board[i][j];

	dp[0][1][0] = 1;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (board[i][j])
				continue;

			long long h = dp[i][j][0];
			long long v = dp[i][j][1];
			long long d = dp[i][j][2];

			if ((h | v | d) == 0)
				continue;

			bool canRight = (j + 1 < N && board[i][j + 1] == 0);
			bool canDown = (i + 1 < N && board[i + 1][j] == 0);
			bool canDiag = (canRight && canDown && board[i + 1][j + 1] == 0);

			if (h)
			{
				if (canRight)
					dp[i][j + 1][0] += h;
				if (canDiag)
					dp[i + 1][j + 1][2] += h;
			}

			if (v)
			{
				if (canDown)
					dp[i + 1][j][1] += v;
				if (canDiag)
					dp[i + 1][j + 1][2] += v;
			}

			if (d)
			{
				if (canRight)
					dp[i][j + 1][0] += d;
				if (canDown)
					dp[i + 1][j][1] += d;
				if (canDiag)
					dp[i + 1][j + 1][2] += d;
			}
		}
	}

	cout << dp[N - 1][N - 1][0] + dp[N - 1][N - 1][1] + dp[N - 1][N - 1][2] << '\n';

	return 0;
}