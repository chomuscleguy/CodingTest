#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int res = 0;

	for (int i = 2; i < n - 1; i += 2)
	{
		for (int j = 1; j < n - 1; j++)
		{
			int namgyu = n - i - j;
			if (namgyu - 2 >= j)
				res++;
		}
	}

	cout << res << '\n';

	return 0;
}