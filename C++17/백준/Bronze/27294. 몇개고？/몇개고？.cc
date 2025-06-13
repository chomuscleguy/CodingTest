#include <iostream>

using namespace std;

int main()
{
	int T, S;
	cin >> T >> S;

	cout << (S == 1 ? 280 : T >= 12 && T <= 16 ? 320 : 280) << '\n';

	return 0;
}