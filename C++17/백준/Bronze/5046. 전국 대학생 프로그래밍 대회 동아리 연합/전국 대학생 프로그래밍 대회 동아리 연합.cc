#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, B, H, W;
	cin >> N >> B >> H >> W;

	int minPrice = 0x7FFFFFFF;

	while (H--)
	{
		int p;
		cin >> p;

		bool isPossible = false;

		for (int i = 0; i < W; i++)
		{
			int capacity;
			cin >> capacity;

			if (capacity >= N && B >= p * N)
				isPossible = true;
		}

		if (isPossible)
			minPrice = min(minPrice, p * N);
	}

	if (minPrice == 0x7FFFFFFF)
		cout << "stay home" << '\n';
	else
		cout << minPrice << '\n';

	return 0;
}