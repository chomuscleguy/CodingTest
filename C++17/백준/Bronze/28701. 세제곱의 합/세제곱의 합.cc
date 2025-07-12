#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int sum = N * (N + 1) / 2;

	int cubeSum = 0;

	for (int i = 1; i <= N; i++)
		cubeSum += i * i * i;

	cout << sum << '\n' << sum*sum << '\n' << cubeSum;

	return 0;
}