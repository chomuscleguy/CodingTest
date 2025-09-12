#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, H, a, cnt = 0;

	cin >> N >> H;

	while (N--)
	{
		cin >> a;

		if (H > 0)
		{
			H -= a;
			cnt++;
		}
	}

	if (H > 0)
		cnt = -1;

	cout << cnt << '\n';


	return 0;
}