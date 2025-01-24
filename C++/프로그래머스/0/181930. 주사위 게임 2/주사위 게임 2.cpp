#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b, int c)
{
    int answer = 1;

    int n = (a != b && a != c && b != c) ? 2 : (a == b && b == c) ? 4 : 3;

    for (int i = 1; i < n; i++) 
        answer *= (pow(a, i) + pow(b, i) + pow(c, i));

    return answer;
}
