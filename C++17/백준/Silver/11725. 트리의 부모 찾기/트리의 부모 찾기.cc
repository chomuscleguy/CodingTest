#include <iostream>
#include <vector>

#define MAX 100001

using namespace std;

vector<int> graph[MAX];
int parent[MAX];
bool visited[MAX];

void dfs(int node)
{
	visited[node] = true;

	for (int next : graph[node])
		if (!visited[next])
		{
			parent[next] = node;
			dfs(next);
		}
}

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N - 1; i++)
	{
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	dfs(1);

	for (int i = 2; i <= N;i++)
		cout << parent[i] << '\n';

	return 0;
}