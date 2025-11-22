#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int holeLower[26] = { };
	int holeUpper[26] = { };

	for (char c : {'a', 'b', 'd', 'e', 'g', 'o', 'p', 'q'})
		holeLower[c - 'a'] = 1;

	for (char c : {'A', 'D', 'O', 'P', 'Q', 'R'})
		holeUpper[c - 'A'] = 1;

	holeUpper['B' - 'A'] = 2;

	string s;
	getline(cin, s);

	int sum = 0;

	for (char c : s)
	{
		if (islower(c))
			sum += holeLower[c - 'a'];
		else if (isupper(c))
			sum += holeUpper[c - 'A'];
		else if (c == '@')
			sum++;
	}

	cout << sum << '\n';

	return 0;
}