#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

bool isValid(const string& s, int start, int len)
{
	stack<char> st;

	for (int i = 0;i < len;i++)
	{
		char c = s[(start + i) % len];

		if (c == '(' || c == '{' || c == '[') 
			st.push(c);
		else
		{
			if (st.empty()) 
				return false;

			char top = st.top();
			if ((c == ')' && top == '(') || (c == '}' && top == '{') || (c == ']' && top == '['))
				st.pop();
			else
				return false;
		}
	}

	return st.empty();
}

int solution(string s)
{
	int answer = 0;
	int len = s.size();

	for (int i = 0; i < len; i++)
		if (isValid(s, i, len)) 
			answer++;

	return answer;
}

int main()
{
	string s;
	cin >> s;

	cout << solution(s) << '\n';

	return 0;
}