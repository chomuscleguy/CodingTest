#include <unordered_set>
#include <vector>

using namespace std;

int solution(vector<int> nums)
{
    unordered_set<int> arr(nums.begin(), nums.end());
    return min(nums.size() / 2, arr.size());
}