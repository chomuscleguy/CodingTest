#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	cin >> N >> M;

	vector<int> line(N);
	vector<int> pos(N + 1);

	for (int i = 0;i < N;i++)
	{
		cin >> line[i];
		pos[line[i]] = i;
	}

	int ans = 0;

	for (int i = 0;i < M;i++)
	{
		int num;
		cin >> num;

		if (pos[num] >= M)
			ans++;
	}

	cout << ans << '\n';

	return 0;
}