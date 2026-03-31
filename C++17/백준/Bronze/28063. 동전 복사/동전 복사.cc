#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, x, y;
	cin >> N >> x >> y;

	cout << (x > 1) + (x < N) + (y > 1) + (y < N) << '\n';

	return 0;
}