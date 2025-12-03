#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	long long res = 1;

	for (int i = 1; i <= N;i++)
		res *= i;

	cout << res << '\n';

	return 0;
}