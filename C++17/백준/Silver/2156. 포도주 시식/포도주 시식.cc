#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	vector<int> wine(N + 1);
	vector<int> dp(N + 1);

	for (int i = 1; i <= N; i++)
		cin >> wine[i];

	if (N >= 1)
		dp[1] = wine[1];
	if (N >= 2)
		dp[2] = wine[1] + wine[2];

	for (int i = 3; i <= N; i++)
		dp[i] = max({ dp[i - 1],dp[i - 2] + wine[i],dp[i - 3] + wine[i - 1] + wine[i] });

	cout << dp[N] << '\n';
    
	return 0;
}