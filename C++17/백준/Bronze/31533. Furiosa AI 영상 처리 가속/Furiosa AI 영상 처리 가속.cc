#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	double a, m, n;
	cin >> a >> m >> n;

	if (m < n)
		swap(m, n);

	double res = min((n / a) * 2, max(m, n / a));

	cout << fixed;
	cout.precision(7);
	cout << res << '\n';

	return 0;
}