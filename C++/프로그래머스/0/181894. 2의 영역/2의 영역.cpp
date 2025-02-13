#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;
	vector<int> v;

	for (int i = 0; i < arr.size(); i++)
		if (arr[i] == 2)
			v.push_back(i);

	if (v.size() >= 2)
	{
		for (int i = v.front(); i <= v.back(); i++)
			answer.push_back(arr[i]);

		return answer;
	}
	else if (v.size() == 1)
		return { 2 };
	else
		return { -1 };
}
