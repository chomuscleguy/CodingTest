#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, A, max = 0;
	cin >> N;

	while (N-- && cin >> A)
		if (A > max)
			max = A;

	cout << max << '\n';

	return 0;
}