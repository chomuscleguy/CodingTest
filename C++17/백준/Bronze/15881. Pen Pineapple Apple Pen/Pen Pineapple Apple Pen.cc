#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	string s;

	cin >> n >> s;

	int ans = 0;

	for (int i = 0; i <= n - 4; i++)
	{
		if (s.compare(i, 4, "pPAp") == 0)
		{
			ans++;
			i += 3;
		}
	}

	cout << ans << '\n';

	return 0;
}