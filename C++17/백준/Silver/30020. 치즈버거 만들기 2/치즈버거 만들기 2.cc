#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int A, B;
	cin >> A >> B;

	int N = A - B;
	int K = 2 * B - A;

	if (N <= 0 || K < 0)
	{
		cout << "NO" << '\n';

		return 0;
	}

	cout << "YES" << '\n';
	cout << N << '\n';

	for (int i = 0;i < N - 1;i++)
		cout << "aba" << '\n';

	string boogy = "aba";

	while (K--)
		boogy += "ba";

	cout << boogy << '\n';

	return 0;
}