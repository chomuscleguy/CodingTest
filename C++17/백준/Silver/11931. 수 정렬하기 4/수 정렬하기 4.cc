#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	vector<int> v(N);

	for (int i = 0;i < N;i++)
		cin >> v[i];

	sort(v.rbegin(), v.rend());

	for (int n : v)
		cout << n << '\n';

	return 0;
}