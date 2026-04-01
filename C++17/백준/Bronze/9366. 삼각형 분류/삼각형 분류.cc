#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		int A, B, C;
		cin >> A >> B >> C;

		cout << "Case #" << i << ": ";

		if (A + B <= C || A + C <= B || B + C <= A)
			cout << "invalid!" << '\n';
		else if (A == B && B == C)
			cout << "equilateral" << '\n';
		else if (A == B || B == C || A == C)
			cout << "isosceles" << '\n';
		else
			cout << "scalene" << '\n';
	}

	return 0;
}