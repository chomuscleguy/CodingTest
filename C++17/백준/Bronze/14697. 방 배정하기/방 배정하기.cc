#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int A, B, C, N;
	cin >> A >> B >> C >> N;

	for (int i = 0; A * i <= N; i++)
	{
		for (int j = 0; A * i + B * j <= N; j++)
		{
			int remain = N - (A * i + B * j);
			if (remain % C == 0)
			{
				cout << 1 << '\n';

				return 0;
			}
		}
	}

	cout << 0 << '\n';

	return 0;
}