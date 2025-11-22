#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int alph[26] = { 0 }, N;
	cin >> N;

	bool isFind = false;

	while (N--)
	{
		string player;
		cin >> player;
		alph[player.front() - 'a']++;
	}

	string res;
	for (int i = 0; i < 26; i++)
		if (alph[i] >= 5)
			res += ('a' + i);

	cout << (res.empty() ? "PREDAJA" : res);

	return 0;
}