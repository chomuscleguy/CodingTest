#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    vector<long long> book(N + 1);

    while (Q--)
    {
        int cmd, x, y;
        cin >> cmd >> x >> y;

        if (cmd == 1)
            book[x] += y;
        else
        {
            long long ans = 0;

            for (int i = x; i <= y; i++) 
                ans += book[i];

            cout << ans << '\n';
        }
    }

    return 0;
}