#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int jumpRope[1001] = {};

	while (N--)
	{
		int height;
		cin >> height;

		jumpRope[1000 - height]++;
	}

	int front = 1001;
	int back = 1001;
	bool isFront = true;
	int ans = 0;

	for (int i = 0; i < 1001; i++)
	{
		while (jumpRope[i] > 0)
		{
			int height = 1000 - i;

			if (isFront && front > height)
			{
				front = height;
				isFront = false;
				ans++;
				jumpRope[i]--;
			}
			else if (!isFront && back > height)
			{
				back = height;
				isFront = true;
				ans++;
				jumpRope[i]--;
			}
			else
				break;
		}
	}

	cout << ans << '\n';

	return 0;
}