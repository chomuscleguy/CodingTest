#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget)
{
    sort(d.begin(), d.end());

    int sum = 0;
    int answer = 0;

    for (int n : d)
    {
        sum += n;

        if (sum > budget)
            break;

        answer++;
    }

    return answer;
}
