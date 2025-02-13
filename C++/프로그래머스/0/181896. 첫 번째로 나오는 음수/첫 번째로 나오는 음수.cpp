#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) 
{
    int answer = 0;
    for (int n : num_list)
    {
        if (n < 0)
            return answer;
        answer++;
    }
    
    return answer == num_list.size() ? -1 : answer;
}