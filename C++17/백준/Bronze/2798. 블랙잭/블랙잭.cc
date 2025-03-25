#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	vector<int> arr(N);

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	int max_sum = 0;

	for (int i = 0; i < N - 2; i++)
		for (int j = i + 1; j < N - 1; j++)
			for (int k = j + 1; k < N; k++)
			{
				int sum = arr[i] + arr[j] + arr[k];
				if (sum <= M && sum > max_sum)
					max_sum = sum;
			}

	cout << max_sum << endl;

	return 0;
}
