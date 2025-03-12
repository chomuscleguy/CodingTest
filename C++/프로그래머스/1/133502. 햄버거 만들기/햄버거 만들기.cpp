#include <vector>
using namespace std;

int solution(vector<int> ingredient) 
{
    int answer = 0;
    vector<int> stack;

    for (int x : ingredient) 
    {
        stack.push_back(x);

        if (stack.size() >= 4 && stack[stack.size() - 4] == 1 && stack[stack.size() - 3] == 2 && stack[stack.size() - 2] == 3 && stack[stack.size() - 1] == 1) 
        {
            answer++;
            stack.resize(stack.size() - 4);
        }
    }

    return answer;
}
