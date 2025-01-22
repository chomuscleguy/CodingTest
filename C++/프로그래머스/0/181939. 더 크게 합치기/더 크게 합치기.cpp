#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string x = to_string(a) + to_string(b);
    string y = to_string(b) + to_string(a);
    if (stoi(x) > stoi(y))
        answer = stoi(x);
    else
        answer = stoi(y);


    return answer;
}