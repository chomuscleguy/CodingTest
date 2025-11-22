#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;

	while (getline(cin, s), s != "END")
	{
		reverse(s.begin(), s.end());
		cout << s << '\n';
	}

	return 0;
}