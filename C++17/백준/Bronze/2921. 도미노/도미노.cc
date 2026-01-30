#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	cout << (N * (N + 1) * (N + 2)) / 2 << '\n';

	return 0;
}