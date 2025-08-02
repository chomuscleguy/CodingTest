#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float prev, curr;
	cin >> prev;

	while (cin >> curr && curr != 999.0)
	{
		cout << fixed << setprecision(2) << curr - prev << '\n';
		prev = curr;
	}

	return 0;
}