#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;

	for (int n : arr)
		if (!answer.empty() && answer.back() == n)
			answer.pop_back();
		else
			answer.push_back(n);

	if (answer.empty())
		answer.push_back(-1);

	return answer;
}
