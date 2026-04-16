#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int money = 5000;
	int cost[] = { 500,800,1000 };

	int input;

	while (cin >> input)
		money -= cost[input - 1];

	cout << money << '\n';

	return 0;
}