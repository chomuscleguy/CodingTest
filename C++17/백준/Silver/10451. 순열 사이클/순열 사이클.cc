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
        int N;
        cin >> N;

        vector<int> p(N + 1);
        vector<bool> visited(N + 1, false);

        for (int i = 1; i <= N; i++)
            cin >> p[i];

        int cycleCount = 0;

        for (int i = 1; i <= N; i++)
        {
            if (!visited[i])
            {
                int cur = i;

                while (!visited[cur])
                {
                    visited[cur] = true;
                    cur = p[cur];
                }

                cycleCount++;
            }
        }

        cout << cycleCount << '\n';
    }
    
    return 0;
}