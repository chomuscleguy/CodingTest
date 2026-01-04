#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int16_t N, K;
	cin >> N >> K;

	vector<int16_t> v(N);
	int16_t tmp = 0;
	int16_t maxValue = 0x8000;

	for (int16_t i = 0; i < N;i++)
	{
		cin >> v[i];
		tmp += v[i];

		if (i >= K)
			tmp -= v[i - K];
		if (i >= K - 1)
			maxValue = max(maxValue, tmp);
	}

	cout << maxValue << '\n';

	return 0;
}