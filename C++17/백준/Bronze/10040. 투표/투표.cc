#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> v(N);

    for (int i = 0; i < N; i++)
    {
        cin >> v[i].first;
        v[i].second = 0;
    }

    for (int i = 0; i < M; i++)
    {
        int n;
        cin >> n;

        for (auto& p : v)
        {
            if (p.first <= n)
            {
                p.second++;
                break;
            }
        }
    }

    int idx = 0;
    int best = -1;

    for (int i = 0; i < N; i++)
    {
        if (v[i].second > best)
        {
            best = v[i].second;
            idx = i;
        }
    }

    cout << (idx + 1) << '\n';

    return 0;
}