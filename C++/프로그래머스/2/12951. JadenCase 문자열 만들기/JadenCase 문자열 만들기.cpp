#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
	int isFirst = true;

	for (char& c : s)
	{
		if (c == ' ')
			isFirst = true;
		else
		{
			if (isFirst)
			{
				c = toupper(c);
				isFirst = false;
			}
			else
				c = tolower(c);
		}
	}

	return s;
}

int main()
{
	string s;
	getline(cin, s);

	cout << solution(s) << '\n';

	return 0;
}