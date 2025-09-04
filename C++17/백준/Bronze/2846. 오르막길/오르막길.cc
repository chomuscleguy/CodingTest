#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, pre, cur;

    cin >> N >> pre;

    int curSlope = 0, maxSlope = 0;

    for (int i = 1; i < N; i++)
    {
        cin >> cur;

        if (cur > pre)
            curSlope += cur - pre;
        else
            curSlope = 0;

        if (curSlope > maxSlope)
            maxSlope = curSlope;

        pre = cur;
    }

    cout << maxSlope << '\n';

    return 0;
}