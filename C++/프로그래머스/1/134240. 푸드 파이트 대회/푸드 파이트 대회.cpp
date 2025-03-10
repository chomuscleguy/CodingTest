#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food)
{
	string answer = "";

	for (int i = 1; i < food.size(); i++)
		answer.append(food[i] / 2, '0' + i);

	answer += '0';

	for (int i = food.size() - 1; i > 0; i--)
		answer.append(food[i] / 2, '0' + i);

	return answer;
}