#include <iostream>

using namespace std;

long long gcd(long long a, long long b)
{
	while (b)
	{
		a %= b;
		swap(a, b);
	}
	return a;
}

long long comb(long long n, long long k)
{
	if (k > n)
		return 0;

	k = min(k, n - k);

	long long res = 1;

	for (long long i = 1; i <= k; i++)
	{
		long long numerator = n - i + 1;
		long long denominator = i;

		long long g = gcd(numerator, denominator);
		numerator /= g;
		denominator /= g;

		g = gcd(res, denominator);
		res /= g;
		denominator /= g;

		res *= numerator;
	}

	return res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	cout << comb(N, N - 5) << '\n';

	return 0;
}