#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

void DFS(int node)
{
	visited[node] = true;
	for (int next : graph[node])
	{
		if (!visited[next])
		{
			DFS(next);
		}
	}
}

int main()
{
	int n, m;
	cin >> n >> m;

	graph.resize(n + 1);
	visited.resize(n + 1, false);

	while (m--)
	{
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	int count = 0;

	for (int i = 1; i <= n; ++i)
	{
		if (!visited[i])
		{
			DFS(i);
			count++;
		}
	}

	cout << count << '\n';
	return 0;
}
