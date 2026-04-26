#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int cur;
	int prev;

	cin >> prev;

	while (cin >> cur)
	{
		if (cur < prev)
		{
			cout << "Bad" << '\n';

			return 0;
		}
		prev = cur;
	}

	cout << "Good" << '\n';

	return 0;
}