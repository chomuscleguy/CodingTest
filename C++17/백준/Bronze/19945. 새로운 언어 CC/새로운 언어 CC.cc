#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	uint32_t N;
	cin >> N;

	int32_t cnt = 0;

	if (N == 0)
		cnt = 1;
	else
	{
		while (N > 0)
		{
			N >>= 1;
			cnt++;
		}
	}

	cout << cnt << '\n';

	return 0;
}