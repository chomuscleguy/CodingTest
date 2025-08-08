#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T, N;
    cin >> T;

    while (T-- && cin >> N)
    {
        cout << string(N, '#') << '\n';

        for (int i = 0; i < N - 2; i++)
            cout << '#' << string(N - 2, 'J') << '#' << '\n';

        if (N > 1)
            cout << string(N, '#') << '\n';

        cout << '\n';
    }

    return 0;
}