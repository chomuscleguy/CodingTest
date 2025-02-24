#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr)
{
	string str;
	vector<string> answer;

	for (int i = 0; i < myStr.size(); i++)
	{
		if (myStr[i] == 'a' || myStr[i] == 'b' || myStr[i] == 'c')
		{
			if (!str.empty())
			{
				answer.push_back(str);
				str.clear();
			}
		}
		else
			str += myStr[i];
	}

	if (!str.empty())
		answer.push_back(str);

	if (answer.empty())
		return { "EMPTY" };

	return answer;
}
