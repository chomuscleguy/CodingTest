#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int* arr;
int* nums;

void BT(int start, int depth)
{
	if (depth == M)
	{
		for (int i = 0; i < M;i++)
			cout << *(nums + i) << ' ';
		cout << '\n';

		return;
	}

	int prev = -1;

	for (int i = start; i < N;i++)
	{
		if (prev != *(arr + i))
		{
			*(nums + depth) = *(arr + i);
			prev = *(arr + i);
			BT(i, depth + 1);
		}
	}
}

int main()
{
	cin >> N >> M;

	arr = new int[N];
	nums = new int[N];

	for (int i = 0; i < N; i++)
		cin >> *(arr + i);

	sort(arr, arr + N);

	BT(0, 0);


	delete[] arr;
	delete[] nums;

	return 0;
}