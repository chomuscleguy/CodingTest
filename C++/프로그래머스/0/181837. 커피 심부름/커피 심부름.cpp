#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order)
{
    int answer = 0;
    for (string str : order)
        answer += (str.find("americano") != string::npos || str.find("anything") != string::npos) ? 4500 : 5000;
    return answer;
}