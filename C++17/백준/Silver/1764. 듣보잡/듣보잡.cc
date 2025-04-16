#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	unordered_set<string> deutbo;
	vector<string> result;

	for (int i = 0; i < n; ++i)
	{
		string name;
		cin >> name;
		deutbo.insert(name);
	}

	for (int i = 0; i < m; ++i)
	{
		string name;
		cin >> name;
		if (deutbo.count(name))
			result.push_back(name);
	}

	sort(result.begin(), result.end());

	cout << result.size() << '\n';

	for (string& name : result)
		cout << name << '\n';

	return 0;
}
