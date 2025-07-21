#include <iostream>
#include <string>

using namespace std;

int N;

string printString(int count)
{
	string bottle;

	if (count < 0)
		count = N;

	if (count == 0)
		bottle = "no more";
	else
		bottle = to_string(count);

	bottle += " bottle";

	if (count != 1)
		bottle += 's';

	bottle += " of beer";

	return bottle;
}

int main()
{
	cin >> N;

	for (int i = N; i >= 0; i--)
	{
		string upper = printString(i);
		upper[0] = toupper(upper[0]);

		cout << upper << " on the wall, " << printString(i) + '.' << '\n';
		cout << (i > 0 ? "Take one down and pass it around, " : "Go to the store and buy some more, ") << printString(i - 1) << " on the wall." << '\n';

		if (i > 0)
			cout << '\n';
	}

	return 0;
}