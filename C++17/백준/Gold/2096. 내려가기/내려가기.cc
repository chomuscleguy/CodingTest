#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int maxDP[3] = {}, minDP[3] = {};
	int val[3] = {};
	cin >> val[0] >> val[1] >> val[2];

	for (int i = 0; i < 3; i++)
		maxDP[i] = minDP[i] = val[i];

	for (int i = 1; i < N; ++i)
	{
		cin >> val[0] >> val[1] >> val[2];

		int preMax[3] = { maxDP[0], maxDP[1], maxDP[2] };
		int preMin[3] = { minDP[0], minDP[1], minDP[2] };

		maxDP[0] = val[0] + max(preMax[0], preMax[1]);
		maxDP[1] = val[1] + max({ preMax[0], preMax[1], preMax[2] });
		maxDP[2] = val[2] + max(preMax[1], preMax[2]);

		minDP[0] = val[0] + min(preMin[0], preMin[1]);
		minDP[1] = val[1] + min({ preMin[0], preMin[1], preMin[2] });
		minDP[2] = val[2] + min(preMin[1], preMin[2]);
	}

	int maxRes = max({ maxDP[0], maxDP[1], maxDP[2] });
	int minRes = min({ minDP[0], minDP[1], minDP[2] });

	cout << maxRes << ' ' << minRes << '\n';

	return 0;
}