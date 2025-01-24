#include <string>
#include <vector>

using namespace std;

string solution(string code)
{
	bool mode = false;
	string answer = "";

	for (int i = 0; i < code.size(); i++)
	{
		if (code[i] == '1')
		{
			mode = !mode;
			continue;
		}

		if ((mode && i % 2 != 0) || (!mode && i % 2 == 0))
		{
			answer += code[i];
		}
	}


	return answer.empty() ? "EMPTY" : answer;
}
