#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() 
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string str;

	while (true)
	{
		getline(cin, str);

		if (str == ".")
			break;

		stack<char> s;
		bool isBalanced = true;

		for (char ch : str)
		{
			if (ch == '(' || ch == '[')
				s.push(ch);
			else if (ch == ')' || ch == ']')
			{
				if (s.empty())
				{
					isBalanced = false;
					break;
				}
				char top = s.top();
				s.pop();
				if ((ch == ')' && top != '(') || (ch == ']' && top != '['))
				{
					isBalanced = false;
					break;
				}
			}
		}

		if (!s.empty())
			isBalanced = false;

		if (isBalanced)
			cout << "yes" << "\n";
		else
			cout << "no" << "\n";
	}

	return 0;
}
