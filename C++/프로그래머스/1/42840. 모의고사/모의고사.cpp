#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers)
{
    vector<int> answer;

    vector<vector<int>> cases = 
    {
        { 1, 2, 3, 4, 5 },
        { 2, 1, 2, 3, 2, 4, 2, 5 },
        { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 }
    };

    vector<int> correct(3, 0);

    for (int i = 0; i < answers.size(); ++i)
        for (int j = 0; j < cases.size(); ++j)
            if (cases[j][i % cases[j].size()] == answers[i])
                correct[j]++;

    int max_value = *max_element(correct.begin(), correct.end());

    for (int i = 0; i < correct.size(); ++i)
        if (correct[i] == max_value)
            answer.push_back(i + 1);

    return answer;
}
