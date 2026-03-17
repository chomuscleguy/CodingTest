#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int A, B, C, M;
	cin >> A >> B >> C >> M;

	int ans = 0;
	int fatigue = 0;

	for (int i = 0;i < 24;i++)
	{
		if (fatigue + A <= M)
		{
			ans += B;
			fatigue += A;
		}
		else
			fatigue = max(0, fatigue - C);
	}

	cout << ans << '\n';

	return 0;
}