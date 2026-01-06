#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<bool> isPrime(1001, true);

	isPrime[0] = false;
	isPrime[1] = false;

	for (int i = 2; i * i < 1001; i++)
	{
		if (!isPrime[i])
			continue;

		for (int j = i * i; j < 1001; j += i)
			isPrime[j] = false;
	}

	int T;
	cin >> T;

	while (T--)
	{
		int K;
		cin >> K;

		bool found = false;

		for (int A = 2; A <= K && !found; A++)
		{
			if (!isPrime[A])
				continue;

			for (int B = A; B <= K && !found; B++)
			{
				if (!isPrime[B])
					continue;

				int C = K - (A + B);

				if (C < B)
					continue;

				if (isPrime[C])
				{
					cout << A << ' ' << B << ' ' << C << '\n';
					found = true;
				}
			}
		}
		if (!found)
			cout << 0 << '\n';
	}

	return 0;
}