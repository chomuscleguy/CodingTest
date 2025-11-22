#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int res = 2;

	for (int i = 1; i < N; i++)
		res += 2 + (i - 1) / 2;

	cout << res << '\n';

	return 0;
}
