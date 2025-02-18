#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list)
{
	bool isMul = num_list.size() < 11;

	int answer = isMul ? 1 : 0;

	for (int n : num_list)
		isMul ? answer *= n : answer += n;

	return answer;
}