#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

long long lcm(int a, int b)
{
	if (a == 0 || b == 0)
		return 0;

	return (a * b / gcd(a, b));
}

int solution(vector<int> arr)
{
	int cur = arr[0];

	for (int i = 1; i < arr.size();i++)
		cur = lcm(cur, arr[i]);

	return cur;
}

int main()
{
	int n;
	cin >> n;

	vector<int> arr(n);

	for (int i = 0;i < n;i++)
		cin >> arr[i];

	cout << solution(arr) << '\n';

	return 0;
}