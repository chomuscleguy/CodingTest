#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int T, n[3];
	cin >> T;

	while (T--)
	{
		cin >> n[0] >> n[1] >> n[2];

		cout << min(n[0], min(n[1],n[2])) << '\n';
	}

	return 0;
}
