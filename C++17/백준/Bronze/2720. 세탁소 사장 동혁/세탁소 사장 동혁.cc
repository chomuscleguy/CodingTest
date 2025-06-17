#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;

	int unit[] = { 25,10,5,1 };

	while (T--)
	{
		int C;
		cin >> C;

		for (int i = 0; i < 4; i++)
		{
			cout << C / unit[i] << ' ';
			C %= unit[i];
		}

		cout << '\n';
	}

	return 0;
}
