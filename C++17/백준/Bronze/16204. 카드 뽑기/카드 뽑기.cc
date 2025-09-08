#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M, K;
	cin >> N >> M >> K;

	cout << min(M, K) + min(N - M, N - K) << '\n';

	return 0;
}