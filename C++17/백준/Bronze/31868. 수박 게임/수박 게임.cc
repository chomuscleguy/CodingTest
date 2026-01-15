#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, K;
	cin >> N >> K;

	cout << (K >> (N - 1)) << '\n';

	return 0;
}