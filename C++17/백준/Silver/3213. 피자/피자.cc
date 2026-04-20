#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int p1 = 0, p2 = 0, p3 = 0;

	while (N--)
	{
		string s;
		cin >> s;

		if (s[0] == '1' && s[2] == '4')
			p1++;
		else if (s[0] == '1' && s[2] == '2')
			p2++;
		else
			p3++;
	}

	int ans = 0;

	ans += p3;
	p1 -= p3;

	ans += p2 / 2;

	if (p2 % 2)
	{
		ans++;
		p1 -= 2;
	}

	p1 = max(0, p1);

	ans += (p1 + 3) / 4;

	cout << ans << '\n';
    
	return 0;
}