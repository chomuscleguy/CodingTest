#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;

	while (T--)
	{
		int N;
		cin >> N;
		vector<string> strV(N);
		bool isFound = false;

		for (int i = 0; i < N; i++)
			cin >> strV[i];

		for (int i = 0; i < N && !isFound; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i == j)
					continue;

				string tmp = strV[i] + strV[j];
				string rev = tmp;
				reverse(rev.begin(), rev.end());

				if (tmp == rev)
				{
					cout << tmp << '\n';
					isFound = true;
					break;
				}
			}
		}
		if (!isFound)
			cout << 0 << '\n';
	}

	return 0;
}