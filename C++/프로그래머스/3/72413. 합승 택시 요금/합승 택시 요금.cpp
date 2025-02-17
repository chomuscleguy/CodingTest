#include <string>
#include <vector>
#include <climits>

using namespace std;

int solution(int n, int s, int a, int b, vector<vector<int>> fares)
{
	int answer = INT_MAX;

	vector<vector<int>> minCost(n + 1, vector<int>(n + 1, INT_MAX));

	for (int i = 0; i < fares.size(); i++)
	{
		minCost[fares[i][0]][fares[i][1]] = fares[i][2];
		minCost[fares[i][1]][fares[i][0]] = fares[i][2];
	}

	for (int i = 1; i <= n; ++i)
		minCost[i][i] = 0;

	for (int k = 1; k <= n; k++)
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				if (minCost[i][k] != INT_MAX && minCost[k][j] != INT_MAX)
					minCost[i][j] = min(minCost[i][j], minCost[i][k] + minCost[k][j]);

	for (int i = 1; i <= n; ++i)
		if (minCost[s][i] != INT_MAX && minCost[i][a] != INT_MAX && minCost[i][b] != INT_MAX)
			answer = min(answer, minCost[s][i] + minCost[i][a] + minCost[i][b]);

	return answer;
}
