#include <iostream>

using namespace std;

int main()
{
	int n, p;
	cin >> n;

	while (n--)
	{
		cin >> p;

		int maxPrice = -1;
		string maxPlayer;

		for (int i = 0; i < p; ++i)
		{
			int price;
			string name;
			cin >> price >> name;

			if (price > maxPrice)
			{
				maxPrice = price;
				maxPlayer = name;
			}
		}

		cout << maxPlayer << '\n';
	}

	return 0;
}