#include <iostream>

using namespace std;

int calc(const string& s)
{
	int hour = (s[0] - '0') * 10 + (s[1] - '0');
	int min = (s[3] - '0') * 10 + (s[4] - '0');

	return hour * 60 + min;
}

int pay(int a, int b)
{
	int end = a + b;
	int cost = 0;

	int l = max(a, 0);
	int r = min(end, 420);
	if (l < r) 
		cost += (r - l) * 5;

	l = max(a, 420);
	r = min(end, 1140);

	if (l < r) 
		cost += (r - l) * 10;

	l = max(a, 1140);
	r = end;

	if (l < r) 
		cost += (r - l) * 5;

	return cost;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int ans = 0;

	while (N--)
	{
		string HHMM;
		int DD;
		cin >> HHMM >> DD;

		ans += pay(calc(HHMM), DD);
	}

	cout << ans << '\n';

	return 0;
}