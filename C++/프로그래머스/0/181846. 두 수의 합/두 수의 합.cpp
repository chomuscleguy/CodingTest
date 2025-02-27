#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string a, string b) 
{
    string answer = "";
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry != 0) 
    {
        int sum = carry;

        if (i >= 0) 
        {
            sum += a[i] - '0';
            i--;
        }

        if (j >= 0) 
        {
            sum += b[j] - '0'; 
            j--;
        }

        carry = sum / 10;
        answer += (sum % 10) + '0';
    }
    reverse(answer.begin(), answer.end());

    return answer;
}
