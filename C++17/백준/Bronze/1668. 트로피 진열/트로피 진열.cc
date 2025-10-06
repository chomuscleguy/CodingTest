#include <iostream>

using namespace std;

struct dir
{
	int left = 0;
	int leftMax = 0;
	int right = 0;
	int rightMax = 0;
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	int* pArr = new int[N];

	for (int i = 0; i < N; i++)
		cin >> pArr[i];

	dir d;

	for (int i = 0; i < N; i++)
	{
		if (d.leftMax < pArr[i])
		{
			d.left++;
			d.leftMax = pArr[i];
		}

		if (d.rightMax < pArr[N - i - 1])
		{
			d.right++;
			d.rightMax = pArr[N - i - 1];
		}
	}

	cout << d.left << '\n' << d.right << '\n';

	delete[] pArr;

	return 0;
}