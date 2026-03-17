#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;

	while (T--)
	{
		unsigned int N;
		cin >> N;

		int cnt = 0;

		while (N > 1)
		{
			if (N & 1)
			{
				N = (N + 1) >> 1;
				cnt++;
			}
			else
				N >>= 1;
		}

		cout << cnt << '\n';
	}

	return 0;
}