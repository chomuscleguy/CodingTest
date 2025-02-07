#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c, int d)
{
	vector<int> dice = { a,b,c,d };
	int p = -1, q = -1;
	int min = -1;
	int arr[7] = {};

	for (int n : dice)
	{
		arr[n]++;
	}

	for (int i = 1; i < 7; i++)
	{
		if (arr[i] == 4)
		{
			return 1111 * i;
		}
	}

	for (int i = 1; i < 7; i++)
	{
		if (arr[i] == 3)
		{
			for (int j = 1; j < 7; j++)
			{
				if (arr[j] == 1 && i != j)
				{
					return (10 * i + j) * (10 * i + j);
				}
			}
		}
	}


	for (int i = 1; i < 7; i++)
	{
		if (arr[i] == 2)
		{
			if (p == -1)
			{
				p = i;
			}
			else
			{
				q = i;
			}
		}
	}

	if (p != -1 && q != -1)
	{
		return (p + q) * abs(p - q);
	}

	if (p != -1)
	{
		int q = -1, r = -1;
		for (int i = 0; i < 7; i++)
		{
			if (arr[i] == 1)
			{
				if (q == -1) q = i;
				else r = i;
			}
		}
		return q * r;
	}

	for (int n : dice)
	{
		if (min == -1 || min > n)
		{
			min = n;
		}
	}

	return min;
}
