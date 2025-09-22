#include <iostream>
#include <algorithm>

#define WEEK 604800

using namespace std;

int main()
{
	long long N,res = 1;
	cin >> N;

	for (int i = 1;i <= N;i++)
		res *= i;

	res /= WEEK;

	cout << res << '\n';

	return 0;
}