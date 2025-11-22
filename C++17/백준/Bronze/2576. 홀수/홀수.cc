#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N = 7;
	int sum = 0, minValue = 0x7FFFFFFF;

	while (N--)
	{
		int input;
		cin >> input;

		if (input & 1)
		{
			sum += input;
			minValue = min(input, minValue);
		}
	}

	if (!sum)
		cout << -1 << '\n';
	else
	{
		cout << sum << '\n';
		cout << minValue << '\n';
	}

	return 0;
}