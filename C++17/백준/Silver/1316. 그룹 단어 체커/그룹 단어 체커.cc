#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int res = 0;

	while (N--)
	{
		string S;
		cin >> S;

		vector<bool> used(26, false);
		bool isGroup = true;
		char pre = S[0];
		used[pre - 'a'] = true;

		for (char c : S)
		{
			if (pre == c)
				continue;

			if (used[c - 'a'])
			{
				isGroup = false;
				break;
			}
			used[c - 'a'] = true;
			pre = c;
		}

		if (isGroup)
			res++;
	}

	cout << res << '\n';

	return 0;
}