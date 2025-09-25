#include <iostream>

using namespace std;

int main()
{
	int T, n;
	cin >> T;

	while (T--)
	{
		cin >> n;
		int** arr = new int* [2];
		int** dp = new int* [2];

		for (int i = 0; i < 2;i++)
		{
			arr[i] = new int[n + 1];
			dp[i] = new int[3];

			for (int j = 1; j < n + 1;j++)
				cin >> arr[i][j];
		}

		dp[0][1] = arr[0][1];
		dp[1][1] = arr[1][1];

		if (n >= 2) 
		{
			dp[0][2] = dp[1][1] + arr[0][2];
			dp[1][2] = dp[0][1] + arr[1][2];
		}


		for (int j = 3; j <= n; j++)
		{
			dp[0][j % 3] = max(dp[1][(j - 1) % 3], dp[1][(j - 2) % 3]) + arr[0][j];
			dp[1][j % 3] = max(dp[0][(j - 1) % 3], dp[0][(j - 2) % 3]) + arr[1][j];
		}

		if (n == 1)
			cout << max(dp[0][1], dp[1][1]) << '\n';
		else
			cout << max(dp[0][n % 3], dp[1][n % 3]) << '\n';


		for (int i = 0; i < 2; i++)
		{
			delete[] arr[i];
			delete[] dp[i];
		}
		delete[] arr;
		delete[] dp;
	}

	return 0;
}