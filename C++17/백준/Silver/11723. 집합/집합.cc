#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int M;
	cin >> M;

	unsigned int S = 0;

	while (M--)
	{
		string cmd;
		int x;
		cin >> cmd;

		if (cmd == "all")
		{
			S = (1 << 20) - 1;
			continue;
		}
		else if (cmd == "empty")
		{
			S = 0;
			continue;
		}

		cin >> x;

		if (cmd == "add")
			S |= (1 << (x - 1));
		else if (cmd == "remove")
			S &= ~(1 << (x - 1));
		else if (cmd == "check")
			cout << ((S & (1 << (x - 1))) ? 1 : 0) << '\n';
		else if (cmd == "toggle")
			S ^= (1 << (x - 1));
	}

	return 0;
}
