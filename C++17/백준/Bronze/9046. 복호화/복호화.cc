#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;
	cin.ignore();

	while (T--)
	{
		vector<int> alphabet(26);

		string s;
		getline(cin, s);

		for (char c : s)
		{
			if ('a' <= c && c <= 'z')
				alphabet[c - 'a']++;
		}

		int maxVal = 0;

		for (int i = 0; i < 26; i++)
			maxVal = max(maxVal, alphabet[i]);

		int cnt = 0;
		int index = -1;

		for (int i = 0; i < 26; i++)
		{
			if (alphabet[i] == maxVal)
			{
				cnt++;
				index = i;
			}
		}

		if (cnt > 1)
			cout << '?' << '\n';
		else
			cout << char('a' + index) << '\n';
	}

	return 0;
}