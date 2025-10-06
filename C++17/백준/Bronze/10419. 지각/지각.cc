#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;

	while (T--)
	{
		int d;
		cin >> d;

		long long i = (-1 + sqrt(1 + 4.0 * d)) / 2;
		cout << i << '\n';
	}

	return 0;
}