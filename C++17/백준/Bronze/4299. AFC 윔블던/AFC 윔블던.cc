#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int sum, diff;
	cin >> sum >> diff;

	if (sum < diff || (sum + diff) % 2 != 0)
	{
		cout << -1 << endl;
		return 0;
	}

	int x = (sum + diff) / 2;
	int y = sum - x;

	cout << x << ' ' << y << '\n';

	return 0;
}