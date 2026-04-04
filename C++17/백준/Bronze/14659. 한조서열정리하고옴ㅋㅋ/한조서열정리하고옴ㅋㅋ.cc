#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	vector<int> peaks(N);

	int ans = 0;

	for (int i = 0;i < N;i++)
		cin >> peaks[i];

	for (int i = 0;i < N - 1;i++)
	{
		int kills = 0;

		for (int j = i;j < N;j++)
		{
			if (peaks[i] > peaks[j])
				kills++;

			if (peaks[i] < peaks[j])
				break;
		}

		ans = max(kills, ans);
	}

	cout << ans << '\n';

	return 0;
}