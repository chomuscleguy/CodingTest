#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	int in, out, max = m;

	while (n--)
	{
		cin >> in >> out;

		m += (in - out);

		if (m < 0)
		{
			max = 0;
			break;
		}

		if (m > max)
			max = m;
	}

	cout << max << '\n';

	return 0;
}