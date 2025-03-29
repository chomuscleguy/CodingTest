#include <iostream>
#include <vector>;
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main()
{
	int n;
	cin >> n;

	vector<pair<int, int>> coordinate(n);

	for (int i = 0; i < n; i++)
		cin >> coordinate[i].first >> coordinate[i].second;

	sort(coordinate.begin(), coordinate.end(), compare);

	for (auto v : coordinate)
		cout << v.first << " " << v.second << "\n";

	return 0;
}
