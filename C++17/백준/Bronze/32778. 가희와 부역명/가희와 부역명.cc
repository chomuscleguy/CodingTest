#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	char c;

	while (cin.get(c))
	{
		if (c == ')')
			break;
		else if (c == '(')
			cout << '\n';
		else if (c == '\n')
		{
			cout << '\n' << '-' << '\n';
			break;
		}
		else
			cout << c;
	}

	return 0;
}