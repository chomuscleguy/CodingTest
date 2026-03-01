#include <iostream>
#include <vector>

using namespace std;

constexpr int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

bool leapYear(int year)
{
	return !(year % 4) && (year % 100 || !(year % 400));
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int year, DOW;
	cin >> year >> DOW;

	int ans = 0;
	int curDOW = DOW;

	for (int month = 1; month <= 12; month++)
	{
		int day = days[month];
		if (month == 2 && leapYear(year))
			day++;

		vector<int> cnt(7, 0);

		for (int i = 0; i < day; i++)
			cnt[(curDOW + i) % 7]++;

		for (int i = 0; i < 7; i++)
			if (cnt[i] >= 5)
				ans++;

		curDOW = (curDOW + day) % 7;
	}

	cout << ans << '\n';
}