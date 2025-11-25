#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

bool compare(int a, int b)
{
	return a > b;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, K;
	cin >> N >> K;

	vector<int> v(N);

	for (int i = 0; i < N; i++)
		cin >> v[i];

	sort(v.begin(), v.end(), compare);

	int sum = accumulate(v.begin(), v.begin() + K, -(K * (K - 1) / 2));

	cout << sum << '\n';


	return 0;
}