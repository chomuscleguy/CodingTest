#include <iostream>

using namespace std;

int calc(int d, int n, int s, int p)
{
	long long serial = (long long)n * s;
	long long parallel = (long long)d + (long long)n * p;

	if (serial < parallel)
		return 0;
	else if (serial > parallel)
		return 1;
	else
		return 2;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str[3] = { "do not parallelize", "parallelize", "does not matter" };

	int T, d, n, s, p;
	cin >> T;

	while (T--)
	{
		cin >> d >> n >> s >> p;

		cout << str[calc(d,n,s,p)] << '\n';
	}

	return 0;
}