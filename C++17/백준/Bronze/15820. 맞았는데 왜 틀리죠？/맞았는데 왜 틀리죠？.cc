#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int S1, S2, x, y;
	cin >> S1 >> S2;

	while (S1-- && cin >> x >> y)
		if (x != y)
			return cout << "Wrong Answer" << '\n', 0;

	while (S2-- && cin >> x >> y)
		if (x != y)
			return cout << "Why Wrong!!!" << '\n', 0;

	cout << "Accepted" << '\n';

	return 0;
}