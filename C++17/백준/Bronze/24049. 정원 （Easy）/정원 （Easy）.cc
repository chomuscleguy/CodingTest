#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	vector<vector<int>> hard(N + 1, vector<int>(M + 1));

	for (int i = 1; i <= N; i++)
		cin >> hard[i][0];
	for (int j = 1; j <= M; j++)
		cin >> hard[0][j];

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			hard[i][j] = hard[i - 1][j] == hard[i][j - 1] ? 0 : 1;

	cout << hard[N][M] << '\n';

	return 0;
}