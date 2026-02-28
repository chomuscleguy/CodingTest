#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string S;
	cin >> S;

	long long ans = 0;

	for (char c : S)
		ans = ans * 26 + (c - 'A' + 1);

	cout << ans << '\n';

	return 0;
}