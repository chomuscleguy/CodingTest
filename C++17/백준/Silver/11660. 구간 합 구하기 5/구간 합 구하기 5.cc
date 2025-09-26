#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	cin >> N >> M;

	int** arr = new int* [N + 1];
	int** dp = new int* [N + 1];

	for (int i = 0; i <= N; i++)
	{
		arr[i] = new int[N + 1]();
		dp[i] = new int[N + 1]();   
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> arr[i][j];

			dp[i][j] = dp[i][j - 1] + dp[i - 1][j] - dp[i - 1][j - 1] + arr[i][j];
		}
	}

	while (M--)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		cout << dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1] << '\n';
	}

	for (int i = 0; i <= N; i++)
		delete[] arr[i];
	delete[] arr;

	return 0;
}