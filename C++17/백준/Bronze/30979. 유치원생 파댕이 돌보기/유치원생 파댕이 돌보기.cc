#include <iostream>

using namespace std;

int main()
{
	int T, N, F, eatingTime = 0;
	cin >> T >> N;

	while (N--)
	{
		cin >> F;
		eatingTime += F;
	}

	cout << (eatingTime >= T ? "Padaeng_i Happy" : "Padaeng_i Cry") << '\n';

	return 0;
}