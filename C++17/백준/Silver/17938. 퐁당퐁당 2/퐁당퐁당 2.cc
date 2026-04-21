#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, P, T;
	cin >> N >> P >> T;

	int hands = 2 * N;

	long long sum = 0;
	int cnt = 1;
	int dir = 1;

	for (int i = 1; i < T; i++)
	{
		sum += cnt;

		if (cnt == hands)
			dir = -1;
		else if (cnt == 1)
			dir = 1;

		cnt += dir;
	}

	int curPos = sum % hands;

	int L_pivot = 2 * P - 1;
	int R_pivot = 2 * P;

	bool found = false;

	for (int i = 0; i < cnt; i++)
	{
		curPos = (curPos + 1) % hands;

		if (curPos == 0)
			curPos = hands;

		if (curPos == L_pivot || curPos == R_pivot)
		{
			found = true;
			break;
		}
	}

	if (found)
		cout << "Dehet YeonJwaJe ^~^" << "\n";
	else
		cout << "Hing...NoJam" << "\n";

	return 0;
}