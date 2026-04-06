#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int alphabet[26] = {};

	string S;
	getline(cin, S);

	for (char c : S)
		if (isupper(c))
			alphabet[c - 'A']++;

	int happy = alphabet['H' - 'A'] + alphabet['A' - 'A'] + alphabet['P' - 'A'] + alphabet['Y' - 'A'];
	int sad = alphabet['S' - 'A'] + alphabet['A' - 'A'] + alphabet['D' - 'A'];

	if (happy + sad == 0)
	{
		cout << "50.00" << '\n';

		return 0;
	}

	int calc = (happy * 100000) / (happy + sad);

	if (calc % 10 >= 5)
		calc = calc / 10 + 1;
	else
		calc /= 10;

	cout << calc / 100 << '.';

	int frac = calc % 100;

	if (frac < 10)
		cout << '0';

	cout << frac << '\n';

	return 0;
}