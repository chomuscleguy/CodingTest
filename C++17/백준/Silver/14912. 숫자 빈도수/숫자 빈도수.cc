#include<iostream>

using namespace std;

int countDigit(int N, int d)
{
	int cnt = 0;

	for (int k = 1; k <= N; k *= 10)
	{
		int high = N / (k * 10);
		int cur = (N / k) % 10;
		int low = N % k;

		if (d != 0)
		{
			if (cur > d)
				cnt += (high + 1) * k;
			else if (cur == d)
				cnt += high * k + (low + 1);
			else
				cnt += high * k;
		}
		else
		{
			if (high == 0)
				continue;
			if (cur > 0)
				cnt += (high - 1) * k + k;
			else if (cur == 0)
				cnt += (high - 1) * k + (low + 1);
			else
				cnt += (high - 1) * k;
		}
	}

	return cnt;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, d;
	cin >> n >> d;

	cout << countDigit(n, d) << '\n';

	return 0;
}