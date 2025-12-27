#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, K;
	cin >> N >> K;

	int pre = 0;
	int cur = 0;
	int count = 0;

	while (N--)
	{
		cin >> cur;
		if (cur > pre)
			pre = cur;
		else if (cur + K > pre)
		{
			pre = cur + K;
			count++;
		}
		else
		{
			cout << -1 << '\n';
			return 0;
		}
	}

	cout << count << '\n';

	return 0;
}