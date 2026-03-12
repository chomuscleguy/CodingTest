#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int angerGauge = 0;
	long long ans = 0;

	while (N--)
	{
		int isRaining;
		cin >> isRaining;

		if (isRaining)
			angerGauge++;
		else
			angerGauge--;

		ans += angerGauge;
	}

	cout << ans << '\n';

	return 0;
}