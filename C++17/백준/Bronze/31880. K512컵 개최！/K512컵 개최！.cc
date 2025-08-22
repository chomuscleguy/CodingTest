#include <iostream>
#include <vector>

using namespace std;

long long calc(const vector<int>& v1, const vector<int>& v2)
{
	long long result = 0;
	for (int i : v1)
		result += i;
	for (int i : v2)
	{
		if (i == 0)
			continue;
		result *= i;
	}

	return result;
}

int main()
{
	int N, M;
	cin >> N >> M;

	vector<int> a(N), b(M);

	while (N-- && cin >> a[N]);
	while (M-- && cin >> b[M]);

	cout << calc(a, b) << '\n';

	return 0;
}