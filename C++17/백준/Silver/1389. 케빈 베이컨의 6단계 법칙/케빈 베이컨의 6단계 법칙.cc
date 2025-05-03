#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> kevinBacon(n + 1);

    while (m--)
    {
        int x, y;
        cin >> x >> y;
        kevinBacon[x].push_back(y);
        kevinBacon[y].push_back(x);
    }

    int minSum = 0x7FFFFFFF;
    int answer = 0;

    for (int i = 1; i <= n; i++)
    {
        vector<int> dist(n + 1, -1);
        queue<int> q;
        q.push(i);
        dist[i] = 0;

        while (!q.empty())
        {
            int cur = q.front();
            q.pop();

            for (int next : kevinBacon[cur])
            {
                if (dist[next] == -1)
                {
                    dist[next] = dist[cur] + 1;
                    q.push(next);
                }
            }
        }

        int sum = 0;

        for (int j = 1; j <= n; j++)
            sum += dist[j];

        if (sum < minSum)
        {
            minSum = sum;
            answer = i;
        }
    }

    cout << answer << endl;

    return 0;
}
