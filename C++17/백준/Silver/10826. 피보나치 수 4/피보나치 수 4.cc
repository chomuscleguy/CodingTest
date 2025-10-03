#include <iostream>
#include <algorithm>

using namespace std;

string calc(string a, string b)
{
	string res;
	int i = a.size() - 1, j = b.size() - 1, carry = 0;

	while (i >= 0 || j >= 0 || carry)
	{
		int sum = carry;

		if (i >= 0)
			sum += a[i--] - '0';
		if (j >= 0)
			sum += b[j--] - '0';

		carry = sum / 10;
		res += (sum % 10 + '0');
	}

	reverse(res.begin(), res.end());

	return res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	string* dp = new string[N + 1];

	if (N >= 0)
		dp[0] = "0";
	if (N >= 1)
		dp[1] = "1";

	for (int i = 2; i < N + 1; i++)
		dp[i] = calc(dp[i - 2], dp[i - 1]);

	cout << dp[N] << '\n';

	delete[] dp;

	return 0;
}