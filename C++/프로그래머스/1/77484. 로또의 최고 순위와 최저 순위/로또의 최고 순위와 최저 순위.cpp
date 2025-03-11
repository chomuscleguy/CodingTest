#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums)
{
	unordered_set<int> win_set(win_nums.begin(), win_nums.end());

	int matchCount = 0, zeroCount = 0;

	for (int n : lottos)
		if (n == 0)
			zeroCount++;
		else if (win_set.count(n))
			matchCount++;

	int highRank = 7 - (matchCount + zeroCount);
	int lowRank = 7 - matchCount;

	if (lowRank == 7) lowRank = 6;
	if (highRank == 7) highRank = 6;

	return { highRank, lowRank };
}
