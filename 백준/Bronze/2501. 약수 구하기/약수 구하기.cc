#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	vector<int> divisors;

	for (int i = 1; i * i <= N; i++)
	{
		if (N % i == 0)
		{
			divisors.push_back(i);

			if (i != N / i)
				divisors.push_back(N / i);
		}
	}

	sort(divisors.begin(), divisors.end());

	if (divisors.size() >= K)
		cout << divisors[K - 1] << '\n';
	else
		cout << 0 << '\n';

	return 0;
}