#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int ans = 0;

	while (N--)
	{
		int student, apple;
		cin >> student >> apple;

		ans += apple % student;
	}

	cout << ans << '\n';

	return 0;
}