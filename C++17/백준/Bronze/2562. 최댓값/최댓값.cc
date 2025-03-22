#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, temp = 0, count = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> n;
		if (temp == 0 || n > temp)
		{
			temp = n;
			count = i + 1;
		}
	}

	cout << temp << "\n" << count;

	return 0;
}
