#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	vector<double> v(N);
	vector<double> dp(N);

	for (int i = 0; i < N;i++)
		cin >> v[i];

	dp[0] = v[0];
	double ans = dp[0];

	for (int i = 1; i < N;i++)
	{
		dp[i] = max(v[i], dp[i - 1] * v[i]);

		if (dp[i] > ans)
			ans = dp[i];
	}

	cout << fixed << setprecision(3) << ans << '\n';

	return 0;
}