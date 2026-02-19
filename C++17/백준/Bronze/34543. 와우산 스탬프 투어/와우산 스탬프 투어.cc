#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, W;
	cin >> N >> W;

	int ans = N * 10;


	if (N >= 3)
		ans += 20;
	if (N >= 5)
		ans += 50;
	if (W > 1000)
		ans -= 15;

	cout << (ans > 0 ? ans : 0) << '\n';

	return 0;
}