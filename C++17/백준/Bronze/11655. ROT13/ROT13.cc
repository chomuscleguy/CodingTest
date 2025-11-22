#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;

	while (getline(cin, s))
	{
		for (char& c : s)
		{
			if ('a' <= c && c <= 'z')
				c = (c - 'a' + 13) % 26 + 'a';
			else if ('A' <= c && c <= 'Z')
				c = (c - 'A' + 13) % 26 + 'A';
		}

		cout << s << '\n';
	}

	return 0;
}