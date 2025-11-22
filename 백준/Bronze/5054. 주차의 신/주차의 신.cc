#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		int maxVal = 0;
		int minVal = 0x7FFFFFFF;

		while (n--)
		{
			int x;
			cin >> x;
			if (x > maxVal)
				maxVal = x;
			if (x < minVal)
				minVal = x;
		}

		cout << (maxVal - minVal) * 2 << '\n';
	}

	return 0;
}