#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int A, B, C, T;

	cin >> A >> B >> C >> T;

	if (T > 30)
		cout << A + ((T - 30 + B - 1) / B) * C << '\n';
	else
		cout << A << '\n';

	return 0;
}