#include<iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int sum = 0;
    int res = 0;

    for (int i = 1; i <= N; i++)
    {
        int x = i;
        sum++;

        while (x % 10 == 0)
        {
            sum -= 9;
            x /= 10;
        }

        if (i % sum == 0)
            res++;
    }

    cout << res << '\n';
}