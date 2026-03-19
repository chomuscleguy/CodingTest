#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	for (int i = 0; i < 5 * N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if ((i / N) & 1)
				cout << "@";
			else
				cout << "@@@@@";
		}
		cout << '\n';
	}

	return 0;
}