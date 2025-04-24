#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M, V;

vector<int> graph[1001];
bool visited[1001];

void dfs(int node)
{
	cout << node << " ";
	visited[node] = true;
	for (int next : graph[node])
	{
		if (!visited[next])
			dfs(next);
	}
}

void bfs(int node)
{
	queue<int> q;
	fill(visited, visited + 1001, false);
	q.push(node);
	visited[node] = true;

	while (!q.empty())
	{
		int current = q.front();
		q.pop();
		cout << current << " ";

		for (int next : graph[current])
		{
			if (!visited[next])
			{
				visited[next] = true;
				q.push(next);
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M >> V;

	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	for (int i = 1; i <= N; i++)
		sort(graph[i].begin(), graph[i].end());

	dfs(V);
	cout << "\n";
	bfs(V);
	cout << "\n";

	return 0;
}
