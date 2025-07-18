#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a == 0 || b == 0)
		cout << c * c - a - b << '\n';
	else
		cout << sqrt(a + b) << '\n';

	return 0;
}