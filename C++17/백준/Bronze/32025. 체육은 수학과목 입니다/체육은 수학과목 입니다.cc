#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int H, W;
	cin >> H >> W;

	cout << min(H, W) * 100 / 2 << '\n';

	return 0;
}