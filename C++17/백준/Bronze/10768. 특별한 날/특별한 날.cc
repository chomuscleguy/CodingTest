#include <iostream>

using namespace std;

string specialDay(int month, int day)
{
	if (month == 2 && day == 18)
		return "Special";

	if (month < 2 || (month == 2 && day < 18))
		return "Before";

	return "After";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int month, day;
	cin >> month >> day;

	cout << specialDay(month, day) << '\n';

	return 0;
}