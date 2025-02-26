#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

int solution(vector<int> rank, vector<bool> attendance)
{
    vector<pair<int, int>> students;

    for (int i = 0; i < rank.size(); ++i) 
        if (attendance[i]) 
            students.push_back({ i, rank[i] });
    
    sort(students.begin(), students.end(),[](pair<int, int>& a, pair<int, int>& b) {return a.second < b.second;});

    int a = students[0].first;
    int b = students[1].first;
    int c = students[2].first;

    return 10000 * a + 100 * b + c;
}
