#include <iostream>

using namespace std;

long long dp[31][31];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i <= 30; i++)
    {
        dp[i][0] = dp[i][i] = 1;

        for (int j = 1; j < i; j++)
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
    }

    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;

        cout << dp[M][N] << '\n';
    }

    return 0;
}