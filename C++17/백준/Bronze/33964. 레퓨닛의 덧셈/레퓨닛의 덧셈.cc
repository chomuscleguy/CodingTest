#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int X, Y;
	cin >> X >> Y;

	int diff = abs(X - Y);
	int mn = min(X, Y);

	long long ans = 0;

	while (diff--)
		ans = ans * 10 + 1;

	while (mn--)
		ans = ans * 10 + 2;

	cout << ans << '\n';

	return 0;
}