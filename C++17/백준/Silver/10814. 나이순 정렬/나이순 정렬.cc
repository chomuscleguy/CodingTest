#include <iostream>
#include <vector>;
#include <algorithm>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}

int main()
{
	int n;
	cin >> n;

	vector<pair<int, string>> member(n);

	for (int i = 0; i < n; i++)
		cin >> member[i].first >> member[i].second;

	stable_sort(member.begin(), member.end(),compare);

	for (auto v : member)
		cout << v.first << " " << v.second << "\n";

	return 0;
}
