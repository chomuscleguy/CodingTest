#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int res = 0, minEven = 0x7FFFFFFF;

		for (int i = 0; i < 7; i++)
		{
			int n;
			cin >> n;

			if (!(n % 2))
			{
				res += n;
				minEven = min(minEven, n);
			}
		}

		cout << res << ' ' << minEven << '\n';
	}

	return 0;
}