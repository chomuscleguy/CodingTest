#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query)
{
    vector<int> answer;

    for (int i = 0; i < query.size(); i++)
        i % 2 ? arr.assign(arr.begin() + query[i], arr.end()) : arr.assign(arr.begin(), arr.begin() + query[i] + 1);

    return arr;
}