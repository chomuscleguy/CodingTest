#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N, M, K;
	cin >> N >> M >> K;

	int team = min(N / 2, M);

	K -= N + M - team * 3;

	while (K > 0 && team > 0)
	{
		team--;
		K -= 3;
	}

	cout << team << '\n';

	return 0;
}