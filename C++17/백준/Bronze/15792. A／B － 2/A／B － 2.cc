#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string A;
	int B;
	cin >> A >> B;

	string s;
	int tmp = 0;

	for (char c : A)
	{
		tmp = tmp * 10 + (c - '0');
		s.push_back((tmp / B) + '0');
		tmp %= B;
	}

	int pos = 0;

	while (pos + 1 < s.size() && s[pos] == '0')
		pos++;

	cout << s.substr(pos) << '.';

	for (int i = 0; i < 1000; i++)
	{
		tmp *= 10;
		cout << tmp / B;
		tmp %= B;
		if (!tmp)
			break;
	}

	return 0;
}