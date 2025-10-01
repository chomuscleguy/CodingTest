#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void dijkstra(int start, vector<vector<pair<int, int>>>& graph, vector<int>& price)
{
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
	price[start] = 0;
	pq.push({ 0, start });

	while (!pq.empty())
	{
		int currentCost = pq.top().first;
		int currentNode = pq.top().second;
		pq.pop();

		if (currentCost > price[currentNode])
			continue;

		for (pair<int, int>& neighbor : graph[currentNode])
		{
			int nextNode = neighbor.first;
			int edgeCost = neighbor.second;
			if (price[nextNode] == -1 || price[nextNode] > currentCost + edgeCost)
			{
				price[nextNode] = currentCost + edgeCost;
				pq.push({ price[nextNode], nextNode });
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	cin >> N >> M;

	vector<vector<pair<int, int>>> graph(N + 1);
	vector<int> price(N + 1, -1);

	for (int i = 0; i < M; i++)
	{
		int A, B, cost;
		cin >> A >> B >> cost;
		graph[A].push_back({ B, cost });
	}

	int depart, arrive;
	cin >> depart >> arrive;

	dijkstra(depart, graph, price);

	cout << price[arrive] << '\n';
	return 0;
}