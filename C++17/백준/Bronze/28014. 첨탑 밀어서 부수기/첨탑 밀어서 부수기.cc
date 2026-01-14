#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int cnt = 0;
	int preHeight = 0;

	while (N--)
	{
		int curHegith;
		cin >> curHegith;

		if (curHegith >= preHeight)
			cnt++;

		preHeight = curHegith;
	}

	cout << cnt << '\n';

	return 0;
}