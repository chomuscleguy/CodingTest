#include <iostream>
#include <string>

using namespace std;

int main()
{
    int L;
    cin >> L;

    string str;
    cin >> str;

    unsigned long long sum = 0;
    unsigned long long power = 1;

    for (int i = 0; i < L; i++) 
    {
        sum += (str[i] - 'a' + 1) * power;
        power *= 31;
    }

    cout << sum << endl;

    return 0;
}
