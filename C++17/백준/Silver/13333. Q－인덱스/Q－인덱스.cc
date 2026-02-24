#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> thesis(n + 1, 0);

	for (int i = 0; i < n; i++)
	{
		int c;
		cin >> c;

		if (c >= n)
			thesis[n]++;
		else
			thesis[c]++;
	}

	int cnt = 0;
	int ans = 0;

	for (int i = n; i >= 0; i--)
	{
		cnt += thesis[i];

		if (cnt >= i)
		{
			ans = i;
			
			break;
		}
	}

	cout << ans << '\n';

	return 0;
}