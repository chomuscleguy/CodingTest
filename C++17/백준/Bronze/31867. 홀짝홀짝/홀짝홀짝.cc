#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	string K;
	cin >> N >> K;

	int res = 0;

	for (int i = 0; i < N;i++)
	{
		int n = K[i] - '0';
		res += (n & 1) ? -1 : 1;
	}

	cout << (res == 0 ? -1 : res > 0 ? 0 : 1);

	return 0;
}