#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int16_t n;
	cin >> n;

	while (n--)
	{
		double a;
		cin >> a;

		double b = a / 6.0;

		cout << fixed << setprecision(10) << b << '\n';
	}

	return 0;
}