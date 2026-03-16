#include <iostream>

using namespace std;

bool isVowel(char c)
{
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool takePrefix(const string& s, string& ans)
{
	bool found = false;

	for (int i = 0; i < s.size(); i++)
	{

		if (isVowel(s[i]))
		{
			if (i == s.size() - 1)
				return false;

			found = true;
		}
		else if (found)
			break;

		ans += s[i];
	}

	return found;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string A, B;
	cin >> A >> B;

	string ans;

	if (!takePrefix(A, ans) || !takePrefix(B, ans))
		cout << "no such exercise" << '\n';
	else
		cout << ans << '\n';

	return 0;
}