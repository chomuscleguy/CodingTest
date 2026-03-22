#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int l = (N - 1) / 2 + 1, r = N;

	for (int i = 0;i < N;i++)
	{
		if (i & 1)
			cout << r-- << ' ';
		else
			cout << l-- << ' ';
	}

	return 0;
}