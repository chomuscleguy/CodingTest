#include <iostream>
#include <string>

using namespace std;

const pair<int, int> dial[10] = { {4,2}, {1,1},{1,2},{1,3},{2,1},{2,2},{2,3},{3,1},{3,2},{3,3} };

int dist(int a, int b)
{
	return abs(dial[a].first - dial[b].first) + abs(dial[a].second - dial[b].second);
}

int effort(int h, int m)
{
	int d1 = h / 10;
	int d2 = h % 10;
	int d3 = m / 10;
	int d4 = m % 10;

	return dist(d1, d2) + dist(d2, d3) + dist(d3, d4);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string HHMM;
	cin >> HHMM;

	int h = (HHMM[0] - '0') * 10 + (HHMM[1] - '0');
	int m = (HHMM[3] - '0') * 10 + (HHMM[4] - '0');

	int minEffort = 0x7FFFFFFF;

	int ansH = h, ansM = m;
	int preM = m;

	while (true)
	{
		if (h > 100)
			break;

		int cur = effort(h, m);

		if (minEffort > cur)
		{
			minEffort = cur;
			ansH = h;
			ansM = m;
		}

		if (preM > 60)
		{
			m -= 60;
			h += 24;
		}
		else
			m += 60;

		preM = m;
	}

	cout << (ansH / 10) << (ansH % 10) << ':' << (ansM / 10) << (ansM % 10) << '\n';

	return 0;
}