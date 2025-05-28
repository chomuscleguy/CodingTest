#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;

		if (x != 0)
			pq.emplace(abs(x), x);
		else
		{
			if (pq.empty())
				cout << 0 << '\n';
			else
			{
				cout << pq.top().second << '\n';
				pq.pop();
			}
		}
	}

	return 0;
}
