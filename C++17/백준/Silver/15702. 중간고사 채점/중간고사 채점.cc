#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	cin >> N >> M;

	vector<int> question(N);

	for (int i = 0;i < N;i++)
	{
		int score;
		cin >> score;

		question[i] = score;
	}

	pair<int, int> ans = { 0x7FFFFFFF,0 };
	int index;

	while (M--)
	{
		cin >> index;

		int total = 0;

		for (int i = 0; i < N;i++)
		{
			char collect;
			cin >> collect;

			if (collect == 'O')
				total += question[i];
		}

		if (total > ans.second || (total == ans.second && index < ans.first))
			ans = { index, total };
	}

	cout << ans.first << ' ' << ans.second << '\n';

	return 0;
}