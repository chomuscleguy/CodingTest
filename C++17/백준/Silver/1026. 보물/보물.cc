#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int A[101] = {};
	int B[101] = {};

	int i = 0;
	int j = 100;
	int ans = 0;

	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		A[x]++;
	}

	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		B[x]++;
	}

	while (i <= 100 && j >= 0)
	{
		if (A[i] == 0)
		{
			i++;
			continue;
		}

		if (B[j] == 0)
		{
			j--;
			continue;
		}

		int match = min(A[i], B[j]);

		ans += match * i * j;

		A[i] -= match;
		B[j] -= match;
	}

	cout << ans << '\n';

	return 0;
}