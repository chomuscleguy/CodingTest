#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    vector<int> real_lost;
    vector<int> real_reserve;

    for (int i = 0; i < lost.size(); i++) 
    {
        if (find(reserve.begin(), reserve.end(), lost[i]) == reserve.end()) 
        {
            real_lost.push_back(lost[i]);
        }
        else 
        {
            reserve.erase(find(reserve.begin(), reserve.end(), lost[i]));
        }
    }

    int answer = n - real_lost.size();

    for (int i = 0; i < real_lost.size(); i++) 
    {
        auto it = find(reserve.begin(), reserve.end(), real_lost[i] - 1);
        if (it != reserve.end())
        {
            reserve.erase(it);
            answer++;
            continue;
        }

        it = find(reserve.begin(), reserve.end(), real_lost[i] + 1);
        if (it != reserve.end()) 
        {
            reserve.erase(it);
            answer++;
        }
    }

    return answer;
}
