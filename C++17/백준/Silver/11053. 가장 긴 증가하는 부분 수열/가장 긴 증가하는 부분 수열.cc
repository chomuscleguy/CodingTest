#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int A;
	cin >> A;

	vector<int> seq(A);
	vector<int> dp(A, 1);

	for (int i = 0; i < A; i++)
		cin >> seq[i];

	for (int j = 0; j < A; j++)
		for (int k = 0; k < j; k++)
			if (seq[k] < seq[j])
				dp[j] = max(dp[j], dp[k] + 1);

		

	cout << *max_element(dp.begin(), dp.end()) << '\n';

	return 0;
}
