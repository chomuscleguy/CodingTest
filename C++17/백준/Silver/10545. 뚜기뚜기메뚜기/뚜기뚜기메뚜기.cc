#include <iostream>

using namespace std;

constexpr int btn[26] = {
	2,2,2,
	3,3,3,
	4,4,4,
	5,5,5,
	6,6,6,
	7,7,7,7,
	8,8,8,
	9,9,9,9
};

constexpr int cnt[26] = {
1,2,3,
1,2,3,
1,2,3,
1,2,3,
1,2,3,
1,2,3,4,
1,2,3,
1,2,3,4
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N[10] = {};

	for (int i = 1; i <= 9; i++)
	{
		int change;
		cin >> change;
		N[change] = i;
	}

	string input;
	cin >> input;

	int pre = -1;

	for (char c : input)
	{
		int idx = c - 'a';

		int cur = btn[idx];
		int k = cnt[idx];

		if (cur == pre)
			cout << '#';

		for (int i = 0; i < k; i++)
			cout << N[cur];

		pre = cur;
	}

	return 0;
}