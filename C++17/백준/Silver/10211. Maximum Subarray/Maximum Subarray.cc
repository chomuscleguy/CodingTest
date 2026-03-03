#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;

	while (T--)
	{
		int N;
		cin >> N;

		int x;
		cin >> x;

		int cur = x;
		int maxVal = x;


		for (int i = 1;i < N;i++)
		{
			cin >> x;

			cur = max(x, cur + x);
			maxVal = max(maxVal, cur);
		}

		cout << maxVal << '\n';
	}

	return 0;
}