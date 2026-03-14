#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	long long odd = 0;
	long long even = 0;

	for (int i = 1;i <= N;i++)
	{
		int A;
		cin >> A;

		if (i & 1)
			odd += A;
		else
			even += A;
	}

	if (N == 3 && odd > even)
		cout << -1 << '\n';
	else
		cout << abs(odd - even) << '\n';

	return 0;
}