#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<int> arr, int k)
{
    vector<int> answer;
    unordered_set<int> seen;

    for (int n : arr)
    {
        if (seen.find(n) == seen.end())
        {
            answer.push_back(n);
            seen.insert(n);
        }
    }

    answer.resize(k, -1);

    return answer;
}
