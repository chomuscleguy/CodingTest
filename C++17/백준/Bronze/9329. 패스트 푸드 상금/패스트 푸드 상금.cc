#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n, m, res = 0;
        cin >> n >> m;

        vector<pair<vector<int>, int>> vp;
        while (n--)
        {
            int k, reward;
            cin >> k;
            vector<int> v(k);
            for (int i = 0; i < k; i++)
                cin >> v[i];
            cin >> reward;
            vp.push_back({ v, reward });
        }

        vector<int> sticker(m);
        for (int i = 0; i < m; i++)
            cin >> sticker[i];

        for (pair<vector<int>,int> &p : vp)
        {
            int minNum = 0x7FFFFFFF;
            bool valid = true; 

            for (int stickerNum : p.first)
            {
                int idx = stickerNum - 1;
                if (idx < 0 || idx >= m || sticker[idx] == 0)
                {
                    valid = false;
                    break;
                }

                minNum = min(minNum, sticker[idx]);
            }

            if (valid)
                res += minNum * p.second;
        }

        cout << res << '\n';
    }

    return 0;
}