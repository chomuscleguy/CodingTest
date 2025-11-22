#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	cin.ignore();

	while (N--)
	{
		string s;
		getline(cin, s);

		vector<int> freq(26, 0);

		for (char& c : s)
			if (isalpha(c))
				freq[tolower(c) - 'a']++;

		string res;

		for (int i = 0; i < 26; i++)
			if (freq[i] == 0)
				res += (char)('a' + i);

		if (res.empty())
			cout << "pangram" << '\n';
		else
			cout << "missing " << res << '\n';
	}

	return 0;
}
