#include <iostream>
#include <vector>

using namespace std;

vector<int> graph[101];
bool visited[101];
int result = 0;

void dfs(int node)
{
	visited[node] = true;
	for (int next : graph[node])
	{
		if (!visited[next])
		{
			result++;
			dfs(next);
		}
	}
}

int main()
{
	int N, M;
	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	dfs(1);

	cout << result << "\n";
	return 0;
}
