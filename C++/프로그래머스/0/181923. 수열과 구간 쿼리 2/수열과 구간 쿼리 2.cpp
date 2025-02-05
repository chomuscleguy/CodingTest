#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries)
{
	vector<int> answer;
	for (vector<int> query : queries)
	{
		int temp = -1;
		for (int i = query[0]; i <= query[1]; i++)
		{
			if (arr[i] > query[2])
			{
				if (temp == -1)
					temp = arr[i];
				else if (arr[i] < temp )
					temp = arr[i];
			}
		}
		answer.push_back(temp);
	}
	return answer;
}