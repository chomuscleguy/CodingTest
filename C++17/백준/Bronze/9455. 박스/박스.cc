#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T, n, m;
    cin >> T;

    while (T--)
    {
        int res = 0;
        cin >> n >> m;

        vector<int> cnt(m, 0);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++) 
            {
                int x;
                cin >> x;

                if (x == 1)
                    cnt[j]++;
                else
                    res += cnt[j];
            }
        }

        cout << res << '\n';
    }
    return 0;
}