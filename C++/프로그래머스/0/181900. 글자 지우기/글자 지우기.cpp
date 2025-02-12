#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> indices) 
{
    sort(indices.rbegin(), indices.rend());
    for (int n : indices)
        my_string.erase(n, 1);
    return my_string;
}