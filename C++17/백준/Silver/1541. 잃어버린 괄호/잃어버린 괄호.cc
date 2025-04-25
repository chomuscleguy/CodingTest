#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string str;
	cin >> str;

	int result = 0;
	int num = 0;
	bool isMinus = false;

	for (char ch : str)
	{
		if (isdigit(ch))
		{
			num = num * 10 + (ch - '0');
		}
		else
		{
			if (isMinus)
				result -= num;
			else
				result += num;

			if (ch == '-')
				isMinus = true;

			num = 0;
		}
	}

	if (isMinus)
		result -= num;
	else
		result += num;

	cout << result << "\n";

	return 0;
}
