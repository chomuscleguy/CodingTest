#include <iostream>

using namespace std;

struct Planet
{
	int x, y, r;
};

bool inside(int px, int py, const Planet& p)
{
	long long dx = px - p.x;
	long long dy = py - p.y;

	return dx * dx + dy * dy < 1LL * p.r * p.r;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;

	while (T--)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		int n;
		cin >> n;

		int ans = 0;

		while (n--)
		{
			Planet p;
			cin >> p.x >> p.y >> p.r;

			bool startInside = inside(x1, y1, p);
			bool endInside = inside(x2, y2, p);

			if (startInside != endInside)
				ans++;
		}

		cout << ans << '\n';
	}

	return 0;
}