#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list)
{
	vector<string> answer;
	bool b = false;

	for (string str : str_list)
	{
		if (!b)
		{
			if (str == "l")
				return answer;
			if (str == "r")
			{
				answer.clear();
				b = true;
				continue;
			}
		}
		answer.push_back(str);
	}

	if (!b)
		answer.clear();

	return answer;
}