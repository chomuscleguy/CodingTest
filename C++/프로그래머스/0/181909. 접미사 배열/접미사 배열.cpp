#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

vector<string> solution(string my_string)
{
    vector<string> arr;
    
    for (int i = 0; i < my_string.size(); i++)
        arr.push_back(my_string.substr(i));

    sort(arr.begin(), arr.end());

    return arr;
}