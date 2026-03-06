#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int input;

	while (cin >> input && input)
		if (input % n)
			cout << input << " is NOT a multiple of " << n << ".\n";
		else
			cout << input << " is a multiple of " << n << ".\n";

	return 0;
}