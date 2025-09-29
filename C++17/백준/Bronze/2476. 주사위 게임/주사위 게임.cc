#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, maxReward = 0;
	cin >> N;

	while (N--)
	{
		int count[7] = { 0 };
		int num, reward = 0, maxNum = 0;

		for (int i = 0; i < 3; i++)
		{
			cin >> num;
			count[num]++;
			if (num > maxNum) maxNum = num;
		}

		for (int i = 1; i <= 6; i++)
		{
			if (count[i] == 3) {
				reward = 10000 + i * 1000;
				break;
			}
			else if (count[i] == 2)
			{
				reward = 1000 + i * 100;
				break;
			}
		}

		if (reward == 0)
			reward = maxNum * 100;

		if (reward > maxReward)
			maxReward = reward;
	}

	cout << maxReward << '\n';

	return 0;
}