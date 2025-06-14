#include <iostream>
#include <iomanip>
#define pi 3.141592

using namespace std;

int main()
{
	int d1, d2;
	cin >> d1 >> d2;

	cout << fixed << setprecision(6);
	cout << d1 * 2 + (d2 * 2) * pi << '\n';

	return 0;
}