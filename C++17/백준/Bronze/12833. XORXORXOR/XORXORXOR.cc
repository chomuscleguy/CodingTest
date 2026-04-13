#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int A, B, C;
	cin >> A >> B >> C;

	if (C % 2)
		A ^= B;

	cout << A << '\n';

	return 0;
}