#include <iostream>
#include <string>

using namespace std;

void deci(string& str)
{
	int s = str.size();
	int res = 0;

	if (str[0] == '0')
	{
		if (s > 1 && str[1] == 'x')
			for (int i = 2; i < s; i++)
			{
				res *= 16;

				if (isdigit(str[i]))
					res += str[i] - '0';
				else
					res += 10 + str[i] - 'a';
			}
		else
			for (int i = 1; i < s; i++)
			{
				res *= 8;
				res += str[i] - '0';
			}

		cout << res << '\n';
	}
	else
		cout << stoi(str) << '\n';
}

int main()
{
	string X;
	cin >> X;

	deci(X);
	return 0;
}
