#include <iostream>

using namespace std;

int main()
{
	int n, r, c;
	cin >> n >> r >> c;

	int answer = 0;

	while (n--)
	{
		int half = 1 << n;
		int quadrantSize = half * half;

		int quadrant = 0;

		if (r >= half)
		{
			quadrant += 2;
			r -= half;
		}
		if (c >= half)
		{
			quadrant += 1;
			c -= half;
		}
			
		answer += quadrant * quadrantSize;
	}

	cout << answer << '\n';

	return 0;
}
