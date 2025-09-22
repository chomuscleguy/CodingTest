#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int** cost = new int* [N];

	for (int i = 0; i < N; i++)
	{
		cost[i] = new int[3];
		cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
	}

	int** dp = new int* [N];

	for (int i = 0; i < N; i++)
	{
		dp[i] = new int[3];

		if (i > 0)
		{
			dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + cost[i][0];
			dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + cost[i][1];
			dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + cost[i][2];
		}
		else
		{
			dp[i][0] = cost[i][0];
			dp[i][1] = cost[i][1];
			dp[i][2] = cost[i][2];
		}
	}

	int res = min(min(dp[N - 1][0], dp[N - 1][1]), dp[N - 1][2]);

	cout << res << '\n';

	for (int i = 0; i < N; i++)
	{
		delete[] cost[i];
		delete[] dp[i];
	}

	delete[] cost;
	delete[] dp;

	return 0;
}