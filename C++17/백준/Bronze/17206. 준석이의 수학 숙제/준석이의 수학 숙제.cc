#include <iostream>

using namespace std;

int calc(int N)
{
	int quo3 = N / 3, quo7 = N / 7, quo21 = N / 21;

	return quo3 * (quo3 + 1) * 3 / 2 + quo7 * (quo7 + 1) * 7 / 2 - quo21 * (quo21 + 1) * 21 / 2;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;

	while (T--)
	{
		int N;
		cin >> N;

		cout << calc(N) << '\n';
	}

	return 0;
}