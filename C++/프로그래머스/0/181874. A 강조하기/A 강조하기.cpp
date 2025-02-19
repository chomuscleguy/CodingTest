#include <string>
#include <vector>

using namespace std;

string solution(string myString)
{
    for (char& ch : myString)
    {
        if (ch == 'a' || ch == 'A')
        {
            ch = 'A'; 
        }
        else if (isupper(ch))
        {
            ch = tolower(ch);
        }
    }

    return myString;
}