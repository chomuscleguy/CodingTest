#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int cnt = 2 * N - 1;
	for (int i = 1; i <= cnt; i++)
	{
		int stars = (i <= N) ? i : 2 * N - i;

		for (int j = 0; j < stars; j++)
			cout << '*';

		if (i == cnt)
			continue;

		cout << '\n';
	}

	return 0;
}