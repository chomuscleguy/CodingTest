#include <iostream>

using namespace std;

int main()
{
	int dp[101];

	dp[0] = 0;

	for (int i = 1; i <= 100; i++)
		dp[i] = dp[i - 1] + i * i;

	int n;
	while (true)
	{
		cin >> n;
		if (n == 0)
			break;

		cout << dp[n] << '\n';
	}

	return 0;
}