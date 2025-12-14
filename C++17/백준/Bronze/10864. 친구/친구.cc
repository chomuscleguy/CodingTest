#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	cin >> N >> M;

	vector<int> degree(N);

	while (M--)
	{
		int A, B;
		cin >> A >> B;

		degree[A - 1]++;
		degree[B - 1]++;
	}

	for (int n : degree)
		cout << n << '\n';

	return 0;
}