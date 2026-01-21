#include <iostream>

using namespace std;

int nextSeat(int currentSeat, int diceSum)
{
	return (currentSeat + diceSum - 2) % 4 + 1;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int A, B, C, D;
	cin >> A >> B >> C >> D;

	cout << nextSeat(nextSeat(1, A + B), C + D) << '\n';

	return 0;
}