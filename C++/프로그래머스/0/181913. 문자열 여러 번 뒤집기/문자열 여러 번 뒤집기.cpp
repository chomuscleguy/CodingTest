#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries)
{
    for (vector<int> query : queries)
    {
        string str = "";
        
        for (int i = query[1]; i >= query[0]; i--)
        {
            str += my_string[i];
        }

        my_string.replace(query[0], str.size(), str);
    }
    
    return my_string;
}