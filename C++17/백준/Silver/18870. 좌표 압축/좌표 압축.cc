#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> x(n);
	vector<int> sorted;

	for (int i = 0; i < n; ++i)
		cin >> x[i];

	sorted = x;

	sort(sorted.begin(), sorted.end());
	sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());

	unordered_map<int, int> coord;

	for (int i = 0; i < sorted.size(); ++i)
		coord[sorted[i]] = i;

	for (int i = 0; i < n; ++i)
		cout << coord[x[i]] << ' ';

	return 0;
}
