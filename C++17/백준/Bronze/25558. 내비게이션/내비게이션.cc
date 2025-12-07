#include <iostream>
#include <cmath>

using namespace std;

inline long long dist(int a, int b)
{
	int d = a - b;
	return d >= 0 ? d : -d;
}

struct OEMData
{
	int index;
	long long cost = 0x7FFFFFFFFFFFFFFF;
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int sx, sy, ex, ey;
	cin >> sx >> sy >> ex >> ey;

	OEMData data;

	for (int i = 0; i < N; i++)
	{
		int M;
		cin >> M;

		long long px = sx, py = sy;
		long long res = 0;

		for (int j = 0; j < M;j++)
		{
			int x, y;
			cin >> x >> y;

			res += dist(px, x) + dist(py, y);

			px = x;
			py = y;
		}

		res += dist(px, ex) + dist(py, ey);

		if (data.cost > res)
		{
			data.index = i + 1;
			data.cost = res;
		}
	}

	cout << data.index << '\n';

	return 0;
}