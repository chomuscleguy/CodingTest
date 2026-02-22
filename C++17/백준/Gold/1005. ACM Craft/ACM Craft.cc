#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N, K;
        cin >> N >> K;

        vector<int> delay(N + 1);

        for (int i = 1; i <= N; i++)
            cin >> delay[i];

        vector<vector<int>> build(N + 1);
        vector<int> indegree(N + 1, 0);

        while (K--)
        {
            int x, y;
            cin >> x >> y;
            build[x].push_back(y);
            indegree[y]++;
        }

        int w;
        cin >> w;

        queue<int> q;
        vector<int> dp(N + 1, 0);

        for (int i = 1; i <= N; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
                dp[i] = delay[i];
            }
        }

        while (!q.empty())
        {
            int cur = q.front();
            q.pop();

            for (int next : build[cur])
            {
                dp[next] = max(dp[next], dp[cur] + delay[next]);
                indegree[next]--;

                if (indegree[next] == 0)
                    q.push(next);
            }
        }

        cout << dp[w] << '\n';
    }

    return 0;
}