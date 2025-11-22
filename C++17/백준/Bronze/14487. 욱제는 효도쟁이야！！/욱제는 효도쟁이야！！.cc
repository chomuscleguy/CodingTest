#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> cost(n);

	for (int i = 0; i < n; i++)
		cin >> cost[i];

	vector<int> extended(cost.begin(), cost.end());
	extended.insert(extended.end(), cost.begin(), cost.end());

	vector<long long> prefix(extended.size() + 1, 0);
	for (int i = 0; i < (int)extended.size(); i++)
		prefix[i + 1] = prefix[i] + extended[i];


	int res = 0x7FFFFFFF;

	for (int i = 0; i < n; i++)
		res = min(res, int(prefix[i + n - 1] - prefix[i]));

	cout << res << '\n';

	return 0;
}