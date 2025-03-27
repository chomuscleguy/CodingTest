#include <iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	long long result = 1;

	if (k > n)
		result = 0;
	else if (k == 0 || k == n)
		result = 1;
	else
	{
		k = (k > n - k) ? n - k : k;

		for (int i = 1; i <= k; ++i)
		{
			result = result * n / i;
			--n;
		}
	}

	cout << result << endl;

	return 0;
}
