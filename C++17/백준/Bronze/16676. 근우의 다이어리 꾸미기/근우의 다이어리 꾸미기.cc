#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string N, limitValue;
    cin >> N;

    int digitCount = N.size();

    if (N.size() != 1)
        limitValue.resize(digitCount, '1');

    if (N >= limitValue)
        cout << digitCount;
    else
        cout << digitCount - 1;

    return 0;
}