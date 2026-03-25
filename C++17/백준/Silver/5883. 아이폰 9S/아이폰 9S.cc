#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	unordered_set<int> us;
	vector<int> waiting;

	waiting.reserve(N);

	while (N--)
	{
		int b;
		cin >> b;
		waiting.push_back(b);
		us.insert(b);
	}

	int ans = 0;

	for (auto& a : us)
	{
		int cur = 0;
		int prev = -1;

		for (int i = 0; i < waiting.size(); i++)
		{
			if (waiting[i] == a)
				continue;

			if (waiting[i] == prev)
				cur++;
			else
			{
				prev = waiting[i];
				cur = 1;
			}

			ans = max(ans, cur);
		}
	}

	cout << ans << '\n';

	return 0;
}