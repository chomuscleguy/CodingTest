#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int interialAngle = 180 * (N - 1);
	int angleSum = 0;

	while (N--)
	{
		int input;
		cin >> input;
		angleSum += input;
	}

	cout << interialAngle - angleSum * 2 << '\n';

	return 0;
}