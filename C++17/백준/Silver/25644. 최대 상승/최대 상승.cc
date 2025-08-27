#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, a;

	cin >> N;

	vector<int> earning(N, 0);
	int high = -1, low = -1;

	while (N-- && cin >> a)
	{
		if (high < a || high == -1)
			high = a;
		if (low > a || low == -1)
			low = a, high = a;
		earning[N] = high - low;
	}

	cout << *max_element(earning.begin(),earning.end()) << '\n';

	return 0;
}