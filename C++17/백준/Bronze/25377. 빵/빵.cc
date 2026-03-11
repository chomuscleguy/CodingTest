#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int ans = 0x7FFFFFFF;

	while (N--)
	{
		int A, B;
		cin >> A >> B;

		if (A <= B)
			ans = min(ans, B);
	}

	cout << (ans == 0x7FFFFFFF ? -1 : ans) << '\n';

	return 0;
}