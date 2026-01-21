#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct coordinate
{
	int x;
	int y;
};

double dist(const coordinate& x, const coordinate& y)
{
	double dx = x.x - y.x;
	double dy = x.y - y.y;

	return sqrt(dx * dx + dy * dy);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	coordinate A, B, C;
	cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;

	if ((B.x - A.x) * (C.y - A.y) == (C.x - A.x) * (B.y - A.y))
	{
		cout << -1 << '\n';
		return 0;
	}

	double AB = dist(A, B);
	double BC = dist(B, C);
	double AC = dist(A, C);

	double p1 = 2.0 * (AB + AC);
	double p2 = 2.0 * (AB + BC);
	double p3 = 2.0 * (AC + BC);

	double mx = max(p1, max(p2, p3));
	double mn = min(p1, min(p2, p3));

	cout << fixed << setprecision(10) << (mx - mn) << '\n';

	return 0;
}