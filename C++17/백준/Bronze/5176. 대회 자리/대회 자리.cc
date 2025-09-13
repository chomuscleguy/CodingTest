#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int K, P, M;
	cin >> K;

	while (K--)
	{
		int res = 0;
		cin >> P >> M;
		int* arr = new int[M]();

		while (P--)
		{
			int tmp;
			cin >> tmp;

			arr[tmp - 1]++;
		}

		for (int i = 0; i < M; i++)
			if (arr[i] > 1)
				res += arr[i] - 1;

		cout << res << '\n';

		delete[] arr;
	}

	return 0;
}