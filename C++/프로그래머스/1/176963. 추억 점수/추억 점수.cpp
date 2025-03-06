#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo)
{
	vector<int> answer;
	int sum = 0;
	//tony가 있으면 다 더하기
	for (vector<string> str : photo)
	{
		for (int i = 0; i < str.size(); i++)
		{
			for (int j = 0; j < name.size(); j++)
			{
				if (str[i] == name[j])
					sum += yearning[j];
			}
		}
		answer.emplace_back(sum);
		sum = 0;
	}

	return answer;
}