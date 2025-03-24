#include <iostream>

using namespace std;

int main()
{
	bool isMix = false;
	int input;
	int prevInput = 0;

	for (int i = 1; i < 9; i++)
	{
		cin >> input;

		if (i == 1)
			prevInput = input;
		else if (input != prevInput + 1 && input != prevInput - 1)
			isMix = true;

		prevInput = input;

		if (i == 8)
		{
			if (isMix)
				cout << "mixed" << endl;
			else if (prevInput == 1)
				cout << "descending" << endl;
			else
				cout << "ascending" << endl;
		}
	}

	return 0;
}
