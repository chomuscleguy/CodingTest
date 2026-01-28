#include <iostream>

using namespace std;

int convert2AD(int y)
{
	return y - 543;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int y;
	cin >> y;
	cout << convert2AD(y) << '\n';

	return 0;
}