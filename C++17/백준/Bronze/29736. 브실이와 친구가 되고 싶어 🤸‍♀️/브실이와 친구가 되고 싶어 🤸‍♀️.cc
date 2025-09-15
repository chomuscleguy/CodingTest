#include <iostream>

using namespace std;

int main()
{
	int A, B, K, X;
	cin >> A >> B >> K >> X;

	int left = max(K - X, A);
	int right = min(K + X, B);

	if (right < left)
		cout << "IMPOSSIBLE" << '\n';
	else
		cout << right - left + 1 << '\n';

	return 0;
}