#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> strArr)
{
	unordered_map<int, int> lengthCount;

	for (const string& str : strArr)
		lengthCount[str.size()]++;

	int maxCount = 0;
	for (pair<const int, int>& entry : lengthCount)
		maxCount = max(maxCount, entry.second);

	return maxCount;
}
