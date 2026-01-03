#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int32_t N, M;
	cin >> N >> M;

	vector<int32_t> route(M);
	for (int32_t i = 0;i < M;i++)
		cin >> route[i];

	vector<vector<int32_t>> price(N, vector<int32_t>(N));

	for (int32_t i = 0; i < N;i++)
		for (int32_t j = 0; j < N; j++)
			cin >> price[i][j];

	int32_t res = 0;

	for (int32_t i = 0;i < M - 1;i++)
		res += price[route[i] - 1][route[i + 1] - 1];

	cout << res << '\n';

	return 0;
}