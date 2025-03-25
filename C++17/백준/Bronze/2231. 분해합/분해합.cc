#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = N / 2; i < N; ++i)
    {
        int sum = i;

        for (int temp = i; temp > 0; temp /= 10)
            sum += temp % 10;

        if (sum == N)
        {
            cout << i;
            return 0;
        }
    }

    cout << 0;

    return 0;
}
