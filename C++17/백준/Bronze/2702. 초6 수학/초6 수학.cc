#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}

	return a;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;

	while (T--)
	{
		int A, B;
		cin >> A >> B;

		int G = gcd(A, B);
		int L = A * B / G;

		cout << L << ' ' << G << '\n';
	}
}