#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string)
{
	int n = 0;
	string str = "";
	vector<string> answer;

	for (char ch : my_string)
	{
		if (ch != ' ')
		{
			str += ch;
		}
		else
		{
			answer.push_back(str);
			str = "";
		}
	}

	if (!str.empty())
	{
		answer.push_back(str);
	}

	return answer;
}