#include <iostream>
#include <deque>
#include <vector>

using namespace std;

constexpr int MAX = 100000;
constexpr int INF = 0x7FFFFFFF;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<int> dist(MAX + 1, INF);
    deque<int> dq;

    dist[N] = 0;
    dq.push_back(N);

    while (!dq.empty())
    {
        int cur = dq.front();
        dq.pop_front();

        if (cur == K)
            break;

        int next = cur * 2;
        if (next <= MAX && dist[next] > dist[cur])
        {
            dist[next] = dist[cur];
            dq.push_front(next);
        }

        next = cur - 1;
        if (next >= 0 && dist[next] > dist[cur] + 1)
        {
            dist[next] = dist[cur] + 1;
            dq.push_back(next);
        }

        next = cur + 1;
        if (next <= MAX && dist[next] > dist[cur] + 1)
        {
            dist[next] = dist[cur] + 1;
            dq.push_back(next);
        }
    }

    cout << dist[K] << '\n';

    return 0;
}