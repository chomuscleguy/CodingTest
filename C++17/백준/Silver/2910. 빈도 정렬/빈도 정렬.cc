#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int compare(const pair<int, int>& a, const pair<int, int>& b)
{
	return a.second > b.second;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, C;
	cin >> N >> C;

	unordered_map<int, pair<int, int>>um;

	int index = 0;

	for (int i = 0;i < N;i++)
	{
		int num;
		cin >> num;

		if (!um.count(num))
		{
			um[num] = { index, 1 };
			index++;
		}
		else
			um[num].second++;
	}

	vector<pair<int,int>> v(um.size());

	for (const auto &a : um)
		v[a.second.first] = { a.first, a.second.second };

	stable_sort(v.begin(), v.end(), compare);

	for (const auto& a : v)
		for (int i = 0;i < a.second;i++)
			cout << a.first << ' ';
	cout << '\n';

	return 0;
}