#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int** nums = new int* [n];

	for (int i = 0; i < n; i++)
	{
		nums[i] = new int[i + 1];
		for (int j = 0; j < i + 1; j++)
			cin >> nums[i][j];
	}

	int* dp = new int[n];

	dp[0] = nums[0][0];

	for (int i = 1; i < n; i++)
	{
		for (int j = i; j >= 0; j--)
		{
			if (j == 0)
				dp[j] = dp[j] + nums[i][j];
			else if (j == i)
				dp[j] = dp[j - 1] + nums[i][j];
			else
				dp[j] = max(dp[j - 1], dp[j]) + nums[i][j];
		}
	}

	cout << *max_element(dp, dp + n) << '\n';

	for (int i = 0; i < n; i++)
		delete[] nums[i];

	delete[] nums;
	delete[] dp;

	return 0;
}