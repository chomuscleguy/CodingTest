#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n)
{
	vector<int> answer;
	for (int i = 0; i < num_list.size(); i++)
		if (i == 0 || i % n == 0)
			answer.push_back(num_list[i]);
	return answer;
}