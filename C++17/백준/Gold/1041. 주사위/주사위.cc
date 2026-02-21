#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int dice[6] = {};

	for (int i = 0; i < 6; i++)
		cin >> dice[i];

	if (N == 1)
	{
		int sum = 0;
		for (int i = 0; i < 6; i++)
			sum += dice[i];

		int mx = *max_element(dice, dice + 6);
		cout << sum - mx;

		return 0;
	}

	int min1 = *min_element(dice, dice + 6);

	int min2 = 0x7FFFFFFF;

	for (int i = 0; i < 6; i++)
	{
		for (int j = i + 1; j < 6; j++)
		{
			if ((i == 0 && j == 5) || (i == 1 && j == 4) || (i == 2 && j == 3))
				continue;

			min2 = min(min2, dice[i] + dice[j]);
		}
	}

	int min3 = min(dice[0], dice[5]) + min(dice[1], dice[4]) + min(dice[2], dice[3]);

	long long ans = 1LL * 4 * min3 + 1LL * (8 * N - 12) * min2 + 1LL * (N - 2) * (5 * N - 6) * min1;

	cout << ans << '\n';

	return 0;
}