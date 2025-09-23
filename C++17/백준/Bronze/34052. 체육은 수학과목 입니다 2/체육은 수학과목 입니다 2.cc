#include <iostream>

using namespace std;

int main()
{
	int n, res = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> n;
		res += n;
	}

	cout << (1800-res >= 300 ? "Yes" : "No") << '\n';

	return 0;
}