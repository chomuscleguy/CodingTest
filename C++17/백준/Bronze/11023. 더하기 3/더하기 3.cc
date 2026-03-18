#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	int ans = 0;

	while (cin >> N)
		ans += N;
	
	cout << ans << '\n';

	return 0;
}