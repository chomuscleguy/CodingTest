#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long N, cluster, res = 0;
	cin >> N;

	long long* fileSize = new long long[N];

	for (int i = 0; i < N; i++)
		cin >> fileSize[i];

	cin >> cluster;

	for (int i = 0; i < N; i++)
		res += ((fileSize[i] + cluster - 1) / cluster) * cluster;

	cout << res << '\n';

	delete[] fileSize;

	return 0;
}