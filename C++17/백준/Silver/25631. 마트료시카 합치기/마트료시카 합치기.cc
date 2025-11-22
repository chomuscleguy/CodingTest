#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	unordered_map<int, int> um;

	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		um[x]++;
	}

	int res = 0;

	for (pair<const int, int> &a : um)
		res = max(res, a.second);
	
	cout << res << '\n';

	return 0;
}