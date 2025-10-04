#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, res = 0, num = 0;
	cin >> n;

	while (n--)
	{
		char c;
		cin >> c;

		if (c >= '0' && c <= '9')
			num = num * 10 + (c - '0');
		else
		{
			res += num;
			num = 0;
		}
	}

	if (num)
		res += num;

	cout << res << '\n';

	return 0;
}