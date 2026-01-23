#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long N;
	cin >> N;

	cout << N * (N - 1) * (N - 2) * (N - 3) / 24 << '\n';

	return 0;
}