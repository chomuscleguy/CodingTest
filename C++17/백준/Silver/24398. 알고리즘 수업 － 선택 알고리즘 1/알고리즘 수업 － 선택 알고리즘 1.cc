#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int64_t cnt;
int32_t ans1 = -1, ans2 = -1;

int32_t partition(vector<int32_t>& A, int32_t p, int32_t r)
{
	int32_t x = A[r];
	int32_t i = p - 1;

	for (int32_t j = p; j <= r - 1; j++)
	{
		if (A[j] < x)
		{
			i++;
			cnt--;
			if (cnt == 0)
			{
				ans1 = min(A[i], A[j]);
				ans2 = max(A[i], A[j]);
			}
			swap(A[i], A[j]);
		}
	}

	if (i + 1 != r)
	{
		cnt--;
		if (cnt == 0)
		{
			ans1 = min(A[i + 1], A[r]);
			ans2 = max(A[i + 1], A[r]);
		}
		swap(A[i + 1], A[r]);
	}

	return i + 1;
}

void select(vector<int32_t>& A, int32_t p, int32_t r, int32_t q)
{
	if (p < r)
	{
		int32_t k = partition(A, p, r);

		if (q < k)
			select(A, p, k - 1, q);
		else if (q > k)
			select(A, k + 1, r, q);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int32_t N, Q;
	int64_t K;
	cin >> N >> Q >> K;

	cnt = K;
	vector<int32_t> A(N);

	for (int32_t i = 0; i < N; i++)
		cin >> A[i];

	select(A, 0, N - 1, Q - 1);

	if (ans1 == -1)
		cout << -1 << '\n';
	else
		cout << ans1 << ' ' << ans2 << '\n';

	return 0;
}