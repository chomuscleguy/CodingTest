#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;

	cout << (int)((T * T) / 4.0 + 0.5) << '\n';

	return 0;
}