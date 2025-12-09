#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<bool> visited(N + 1, false);
    int cnt = 0;
    int res = 0;

    for (int i = 2; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
        {
            if (!visited[j])
            {
                visited[j] = true;
                cnt++;

                if (cnt == K)
                {
                    cout << j << '\n';
                    return 0;
                }
            }
        }
    }

    return 0;
}