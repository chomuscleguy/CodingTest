#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	unordered_map<char, string> mp;

	for (int i = 0; i < N; i++)
	{
		string s;
		char c;
		cin >> s >> c;
		mp[c] = s;
	}

	string str, res;
	int S, E;
	cin >> str >> S >> E;


	for (const char &c : str)
		res += mp[c];

	cout << res.substr(S - 1, E - S + 1) << '\n';

	return 0;
}