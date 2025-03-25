#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int L;
    cin >> L;

    string str;
    cin >> str;

    unsigned long long sum = 0, power = 1, r = 31, M = 1234567891;

    for (int i = 0; i < L; i++) 
    {
        sum = (sum + (str[i] - 'a' + 1) * power) % M;

        power = (power * r) % M;
    }

    cout << sum << endl;

    return 0;
}
