#include <iostream>

using namespace std;

int main()
{
    int T, N;
    cin >> T;

    while (T--)
    {
        cin >> N;

        cout << (N % 2 ? 0 : (1LL << (N / 2))) << '\n';
    }

    return 0;
}