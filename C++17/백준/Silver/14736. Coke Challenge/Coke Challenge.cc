#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, K, A;
	cin >> N >> K >> A;

	int ans = 0x7FFFFFF;

	while (N--)
	{
		int t, s;
		cin >> t >> s;

		int cycle = K / (t * A);
		int rem = K % (t * A);

		int total = cycle * t + (cycle - 1) * s;

		if (rem > 0)
		{
			total += s;
			total += (rem + A - 1) / A;
		}

		ans = min(ans, total);
	}

	cout << ans << '\n';

	return 0;
}