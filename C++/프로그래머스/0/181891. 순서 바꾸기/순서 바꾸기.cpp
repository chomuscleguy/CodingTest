#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n)
{
	vector<int> answer(num_list.begin(), num_list.begin() + n);

	answer.insert(answer.begin(), num_list.begin() + n, num_list.end());

	return answer;
}