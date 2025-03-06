#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) 
{
    vector<int> answer;

    unordered_map<string, int> yearningMap;

    for (int i = 0; i < name.size(); i++) 
        yearningMap[name[i]] = yearning[i];

    for (vector<string>& str : photo) 
    {
        int sum = 0;
        for (string& person : str) 
            if (yearningMap.find(person) != yearningMap.end())
                sum += yearningMap[person];
        answer.push_back(sum);
    }

    return answer;
}