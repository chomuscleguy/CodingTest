#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int ans = 0;

	for (int r = 0; r < 8; r++)
	{
		string board;
		cin >> board;

		for (int c = 0; c < 8; c++)
			if (!((r + c) & 1) && board[c] == 'F')
				ans++;
	}

	cout << ans << '\n';

	return 0;
}