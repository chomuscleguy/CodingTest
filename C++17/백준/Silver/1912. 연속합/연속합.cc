#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int x;
	cin >> x;

	int cur = x;
	int ans = x;

	for (int i = 1; i < N; i++)
	{
		cin >> x;
		cur = max(x, cur + x);
		ans = max(ans, cur);
	}

	cout << ans << '\n';

	return 0;
}