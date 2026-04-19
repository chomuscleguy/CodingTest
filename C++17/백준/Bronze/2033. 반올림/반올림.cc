#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string N;
    cin >> N;

    int digit = N.length();

    for (int i = digit - 1; i > 0; i--)
    {
        if (N[i] >= '5')
            N[i - 1] += 1;

        N[i] = '0';
    }

    if (N[0] > '9')
    {
        N[0] = '0';
        N = '1' + N;
    }

    cout << N << '\n';

    return 0;
}