#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int ans = 0;

	while (N--)
	{
		int op;
		cin >> op;

		op ? ans++ : ans--;
	}

	cout << (ans < 0 ? "Junhee is not cute!" : "Junhee is cute!") << '\n';

	return 0;
}