#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, m, M, T, R;
	cin >> N >> m >> M >> T >> R;

	int remainingExercise = N;
	int currentPulse = m;
	int elapsedMinutes = 0;

	if (m + T > M)
	{
		cout << -1 << '\n';

		return 0;
	}

	while (remainingExercise)
	{
		if (currentPulse + T <= M)
		{
			currentPulse += T;
			remainingExercise--;
		}
		else
			currentPulse = max(m, currentPulse - R);

		elapsedMinutes++;
	}

	cout << elapsedMinutes << '\n';

	return 0;
}