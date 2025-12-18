#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;

	int arr[3] = { a, b, c };
	sort(arr, arr + 3);

	cout << min(arr[0] + arr[1] + arr[2], (arr[0] + arr[1]) * 2 - 1) << '\n';

	return 0;
}