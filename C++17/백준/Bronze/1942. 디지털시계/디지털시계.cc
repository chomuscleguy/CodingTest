#include <iostream>

using namespace std;

int toSecond(const string& s)
{
	int h = (s[0] - '0') * 10 + (s[1] - '0');
	int m = (s[3] - '0') * 10 + (s[4] - '0');
	int sec = (s[6] - '0') * 10 + (s[7] - '0');
	return h * 3600 + m * 60 + sec;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int loop = 3;

	while (loop--)
	{
		string A, B;
		cin >> A >> B;

		int cur = toSecond(A);
		int end = toSecond(B);

		if (end < cur)
			end += 24 * 3600;

		int ans = 0;

		for (int t = cur; t <= end; t++)
		{
			int cur = t % (24 * 3600);

			int h = cur / 3600;
			int m = (cur % 3600) / 60;
			int s = cur % 60;

			int hhmmss = h * 10000 + m * 100 + s;

			if (hhmmss % 3 == 0)
				ans++;
		}

		cout << ans << '\n';
	}

	return 0;
}