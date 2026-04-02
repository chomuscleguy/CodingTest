#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	vector<int> rented(N);

	for (int i = 0;i < N;i++)
		cin >> rented[i];

	int ans = 0;

	for (int i = 0;i < N;i++)
	{
		int returned;
		cin >> returned;

		ans += max(0, rented[i] - returned);
	}

	cout << ans << '\n';

	return 0;
}