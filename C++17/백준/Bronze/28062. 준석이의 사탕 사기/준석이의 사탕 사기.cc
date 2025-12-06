#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int res = 0;
    int oddCount = 0;
    int minOdd = 0x7FFFFFFF;

    while (N--)
    {
        int a;
        cin >> a;

        res += a;

        if (a & 1)
        {
            oddCount++;
            minOdd = min(minOdd, a);
        }
    }

    if (oddCount & 1)
        res -= minOdd;

    cout << res << '\n';

    return 0;
}