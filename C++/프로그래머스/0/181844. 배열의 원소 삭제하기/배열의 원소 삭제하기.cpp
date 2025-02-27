#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list)
{
	unordered_set<int> deleteSet(delete_list.begin(), delete_list.end());

	vector<int> answer;

	for (int n : arr)
		if (deleteSet.find(n) == deleteSet.end())
			answer.push_back(n);

	return answer;
}
