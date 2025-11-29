#include <iostream>

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

		string res;
		int tmp = 0;

		while (N--)
		{
			string S;
			int L;
			cin >> S >> L;

			if (L > tmp)
			{
				res = S;
				tmp = L;
			}
		}

		cout << res << '\n';
	}


	return 0;
}