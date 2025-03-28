#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    float result = 0.0f;

    result += str.front() == 'A' ? 4.0f :
        str.front() == 'B' ? 3.0f :
        str.front() == 'C' ? 2.0f :
        str.front() == 'D' ? 1.0f : 0.0f;

    result += str.back() == '+' ? 0.3f :
        str.back() == '-' ? -0.3f : 0.0f;

    printf("%.1f", result);

    return 0;
}
