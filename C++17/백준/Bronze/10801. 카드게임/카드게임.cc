#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int32_t score = 0;

	int32_t A[10] = {};

	for (int32_t i = 0; i < 10; i++)
		cin >> A[i];

	for (int32_t i = 0; i < 10; i++)
	{
		int32_t B;
		cin >> B;

		if (A[i] != B)
			score += (A[i] > B ? 1 : -1);
	}

	cout << (score == 0 ? 'D' : score > 0 ? 'A' : 'B');

	return 0;
}