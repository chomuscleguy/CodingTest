#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string target = "WelcomeToSMUPC";
	int n;
	cin >> n;

	cout << target[(n - 1) % target.size()] << '\n';

	return 0;
}