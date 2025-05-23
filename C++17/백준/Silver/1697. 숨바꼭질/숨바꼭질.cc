#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
	int N, K;

	cin >> N >> K;

	queue<int> q;
	vector<int> depth(100001, -1);

	q.push(N);
	depth[N] = 0;

	while (!q.empty())
	{
		int cur = q.front();
		q.pop();

		if (cur == K)
			break;

		for (int next : {cur - 1, cur + 1, 2 * cur})
		{
			if (next >= 0 && next < 100001 && depth[next] == -1)
			{
				depth[next] = depth[cur] + 1;
				q.push(next);
			}
		}
	}

	cout << depth[K] << '\n';

	return 0;
}
