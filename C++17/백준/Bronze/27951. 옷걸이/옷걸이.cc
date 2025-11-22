#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	vector<int> hangers(N);
	vector<int> cnt(3);

	for (int i = 0; i < N;i++)
	{
		int n;
		cin >> n;

		hangers[i] = n;
		cnt[n - 1]++;
	}
	int U, D;
	cin >> U >> D;

	string res;
	int needU = U - cnt[0];
	int needD = D - cnt[1];

	if (needU > cnt[2] || needD > cnt[2])
		cout << "NO" << '\n';
	else
	{
		cout << "YES" << '\n';

		for (int i = 0; i < N;i++)
		{
			if (hangers[i] == 1)
				res += 'U';
			else if (hangers[i] == 2)
				res += 'D';
			else
			{
				if (needU > 0)
				{
					res += 'U';
					needU--;
				}
				else if (needD > 0)
				{
					res += 'D';
					needD--;
				}
			}
		}
	}

	cout << res << '\n';

	return 0;
}