#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int n) 
{
    vector<int> answer;
    for (int i = 1; i <= n; i++)
        if (!(n%i))
            answer.emplace_back(i);
    sort(answer.begin(), answer.end());
    return answer;
}