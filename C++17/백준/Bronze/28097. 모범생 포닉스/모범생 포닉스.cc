#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int total = (N - 1) * 8;

	while (N--)
	{
		int hour;
		cin >> hour;

		total += hour;
	}

	cout << total / 24 << ' ' << total % 24 << '\n';

	return 0;
}