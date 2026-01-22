#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	constexpr int FULL_CAPACITY = 10000;
	int curP = 0;
	int maxP = 0;

	for (int i = 0; i < 10; ++i)
	{
		int disembark, board;
		cin >> disembark >> board;

		curP += board - disembark;

		if (curP > FULL_CAPACITY)
			curP = FULL_CAPACITY;

		if (curP > maxP)
			maxP = curP;
	}

	cout << maxP << '\n';

	return 0;
}