#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string bowls;
	cin >> bowls;

	int n = bowls.size();
	int ans = 10;

	for (int i = 1;i < n;i++)
		ans += (bowls[i] == bowls[i - 1] ? 5 : 10);

	cout << ans << '\n';

	return 0;
}