#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<vector<int>> graph(N, vector<int>(N));
	vector<vector<int>> result(N, vector<int>(N, 0));

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> graph[i][j];

	for (int k = 0; k < N; k++)
	{
		vector<bool> visited(N, false);
		queue<int> q;

		q.push(k);

		while (!q.empty())
		{
			int curr = q.front();
			q.pop();

			for (int next = 0; next < N; next++)
			{
				if (graph[curr][next] == 1 && !visited[next])
				{
					visited[next] = true;
					result[k][next] = 1;
					q.push(next);
				}
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << result[i][j] << " ";
		cout << '\n';
	}

	return 0;
}