#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	vector<pair<int, int>> card(N);
	vector<bool> flip(N, true);

	for (int i = 0; i < N; i++)
		cin >> card[i].first >> card[i].second;

	int cmd;

	while (M--)
	{
		cin >> cmd;

		for (int i = 0; i < N; i++)
		{
			int value = flip[i] ? card[i].first : card[i].second;
			if (cmd >= value)
				flip[i] = !flip[i];
		}
	}

	int result = 0;

	for (int i = 0; i < N; i++)
		result += flip[i] ? card[i].first : card[i].second;

	cout << result << '\n';

	return 0;
}