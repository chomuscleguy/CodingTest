#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int arr[11] = {};

	int sum = 0;

	for (int i = 0;i < 5;i++)
	{
		int num;
		cin >> num;

		sum += num;
		arr[num / 10]++;
	}

	int cnt = 0;
	int median = 0;

	for (int i = 1; i <= 10;i++)
	{
		cnt += arr[i];

		if (cnt >= 3)
		{
			median = i * 10;
			break;
		}
	}

	cout << sum / 5 << '\n' << median << '\n';

	return 0;
}