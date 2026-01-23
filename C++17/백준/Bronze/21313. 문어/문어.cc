#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	for (int i = 0;i < N;i++)
	{
		if (i == N - 1 && N % 2 == 1)
			cout << 3 << ' ';
		else
			cout << i % 2 + 1 << ' ';
	}

	cout << '\n';

	return 0;
}