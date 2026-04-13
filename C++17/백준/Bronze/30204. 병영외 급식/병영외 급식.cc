#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, X;
	cin >> N >> X;

	int total = 0;
	while (N--)
	{
		int num;
		cin >> num;

		total += num;
	}

	cout << (total % X ? 0 : 1) << '\n';

	return 0;
}