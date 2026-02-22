#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	cin >> N >> M;

	unordered_set<string> us;

	while (N--)
	{
		string s;
		cin >> s;

		us.insert(s);
	}

	int ans = 0;

	while (M--)
	{
		string s;
		cin >> s;

		if (us.find(s) != us.end())
			ans++;
	}

	cout << ans << '\n';

	return 0;
}