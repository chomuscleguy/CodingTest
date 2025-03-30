#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, M;
	cin >> N;
	unordered_set<int> A;

	for (int i = 0; i < N; ++i)
	{
		int num;
		cin >> num;
		A.insert(num);
	}

	cin >> M;

	for (int i = 0; i < M; ++i)
	{
		int query;
		cin >> query;
		if (A.find(query) != A.end())
			cout << 1 << "\n";
		else
			cout << 0 << "\n";
	}

	return 0;
}
