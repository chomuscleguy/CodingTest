#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	char c[101];
	for (int i = 0; i < N; i++)
		cin >> c[i];

	for (int i = 0; i < N / 2; i++)
	{
		int j = N - 1 - i;

		if (c[i] == '?' || c[j] == '?')
		{
			if (c[i] == '?' && c[j] == '?')
				c[i] = c[j] = 'a';
			else if (c[i] == '?')
				c[i] = c[j];
			else
				c[j] = c[i];
		}
	}

	if (N % 2 == 1 && c[N / 2] == '?')
		c[N / 2] = 'a';

	for (int i = 0; i < N; i++)
		cout << c[i];

	cout << '\n';

	return 0;
}