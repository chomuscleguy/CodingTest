#include <iostream>
#include <vector>

using namespace std;

bool compare(vector<vector<int>>& dummy)
{
	for (vector<int>& v : dummy)
	{
		for (int i = 0; i < v.size() - 1; i++)
			if (v[i] < v[i + 1])
				return false;
	}
	return true;
}


int main()
{
	int N, M;
	cin >> N >> M;

	vector<vector<int>> dummy(M);

	for (int i = 0; i < M; i++)
	{
		int K;
		cin >> K;
		dummy[i].resize(K);
		for (int j = 0; j < K; j++)
			cin >> dummy[i][j];
	}

	cout << (compare(dummy) ? "Yes" : "No") << '\n';

	return 0;
}