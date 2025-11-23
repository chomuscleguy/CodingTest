#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int cnt = 0;
	vector<int> cow(100, -1);
	
	while (N--)
	{
		int x, y;
		cin >> x >> y;

		if (cow[x] != y && cow[x] != -1)
			cnt++;

		cow[x] = y;
	}

	cout << cnt << '\n';

	return 0;
}