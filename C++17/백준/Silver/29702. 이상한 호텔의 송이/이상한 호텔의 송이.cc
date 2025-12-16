#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	while (T--)
	{
		long long N;
		cin >> N;

		int floor = 0;

		for (long long tmp = N; tmp; tmp >>= 1)
			floor++;

		long long roomIndex = N - ((1LL << (floor - 1)) - 1);

		while (floor)
		{
			cout << floor << setw(18) << setfill('0') << roomIndex << '\n';

			roomIndex = (roomIndex + 1) / 2;
			floor--;
		}
	}

	return 0;
}