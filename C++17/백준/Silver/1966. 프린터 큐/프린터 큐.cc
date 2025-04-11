#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;

	while (N--)
	{
		int M, index;
		cin >> M >> index;

		queue<pair<int, int>> q;
		vector<int> v(M);

		for (int i = 0; i < M; i++)
		{
			int x;
			cin >> x;
			q.push({ i, x });
			v[i] = x;
		}

		sort(v.rbegin(), v.rend());

		int count = 0;
		int idx = 0;

		while (!q.empty())
		{
			pair<int, int> current = q.front();

			q.pop();

			int key = current.first;
			int val = current.second;

			if (val == v[idx])
			{
				count++;
				if (key == index)
				{
					cout << count << "\n";
					break;
				}
				idx++;
			}
			else
			{
				q.push(current);
			}
		}
	}

	return 0;
}
