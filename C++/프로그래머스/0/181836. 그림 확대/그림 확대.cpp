#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k)
{
	vector<string> answer;

	for (string str : picture)
	{
		string temp = "";

		for (char ch : str)
			temp.append(k, ch);

		for (int i = 0; i < k; ++i)
			answer.push_back(temp);
	}
	return answer;
}