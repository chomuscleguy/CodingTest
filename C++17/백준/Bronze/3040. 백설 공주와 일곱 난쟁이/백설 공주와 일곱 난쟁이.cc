#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> dwarf(9);
	int total = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> dwarf[i];
		total += dwarf[i];
	}

	int diff = total - 100;

	for (int i = 0; i < 8; i++)
		for (int j = 1; j < 9; j++)
			if (dwarf[i] + dwarf[j] == diff)
			{
				for (int k = 0; k < 9; k++)
					if (k != i && k != j)
						cout << dwarf[k] << '\n';
				return 0;
			}
}