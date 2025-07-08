#include <iostream>

using namespace std;

int M, X, Y, pos = 1;

int main()
{
	cin >> M;

	while (M--)
	{
		cin >> X >> Y;

		if (pos == X)
			pos = Y;
		else if (pos == Y)
			pos = X;
	}

	cout << pos << '\n';

	return 0;
}
