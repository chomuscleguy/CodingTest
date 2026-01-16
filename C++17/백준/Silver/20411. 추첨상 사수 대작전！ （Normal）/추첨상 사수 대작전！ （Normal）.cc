#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long m, seed, x1, x2;
	cin >> m >> seed >> x1 >> x2;

	for (long long a = 0; a < m; a++)
	{
		long long c = (x2 - a * x1) % m;

		if (c < 0) 
			c += m;

		if ((a * seed + c) % m == x1)
		{
			cout << a << ' ' << c << '\n';
			return 0;
		}
	}

	return 0;
}