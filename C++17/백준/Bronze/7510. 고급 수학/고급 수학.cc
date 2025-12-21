#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int side[3];
		cin >> side[0] >> side[1] >> side[2];
		sort(side, side + 3);

		cout << "Scenario #" << i << ':' << '\n';
		cout << (side[2] * side[2] == side[0] * side[0] + side[1] * side[1] ? "yes" : "no") << '\n';
		cout << '\n';
	}

	return 0;
}