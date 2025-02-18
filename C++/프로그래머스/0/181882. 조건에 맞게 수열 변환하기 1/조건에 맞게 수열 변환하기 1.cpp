#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;
	for (int n : arr)
		if (n >= 50)
			n % 2 ? answer.push_back(n) : answer.push_back(n / 2);
		else
			n % 2 ? answer.push_back(n * 2) : answer.push_back(n);
	return answer;
}