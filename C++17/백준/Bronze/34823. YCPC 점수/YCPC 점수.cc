#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int y, c, p;
	cin >> y >> c >> p;

	cout << min(y, min(c / 2, p)) << '\n';

	return 0;
}