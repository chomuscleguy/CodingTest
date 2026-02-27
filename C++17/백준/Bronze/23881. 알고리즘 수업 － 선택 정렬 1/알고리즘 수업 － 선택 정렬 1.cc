#include <iostream>
#include <vector>

using namespace std;

void selection_sort(vector<int>& A, int& K)
{
	int N = A.size();
	int a = 0, b = 0;

	for (int last = N - 1;last > 0;last--)
	{
		int maxIdx = 0;

		for (int i = 1;i <= last;i++)
		{
			if (A[i] > A[maxIdx])
				maxIdx = i;
		}

		if (maxIdx != last)
		{
			K--;

			swap(A[maxIdx], A[last]);

			if (K)
				continue;

			cout << A[maxIdx] << ' ' << A[last] << '\n';
			return;
		}
	}

	if (K)
		cout << -1 << '\n';
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, K;
	cin >> N >> K;

	vector<int> A;
	A.reserve(N);

	while (N--)
	{
		int num;
		cin >> num;

		A.push_back(num);
	}

	selection_sort(A, K);

	return 0;
}