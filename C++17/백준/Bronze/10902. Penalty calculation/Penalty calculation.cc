#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int32_t n;
	cin >> n;

	int32_t minT = 301, maxS = 0, f = 0;

	for (int32_t i = 1; i <= n;i++)
	{
		int32_t t, s;
		cin >> t >> s;

		if (s > maxS)
		{
			maxS = s;
			f = i;
			minT = t;
		}
	}

	cout << (maxS <= 0 ? 0 : minT + (f - 1) * 20) << '\n';

	return 0;
}