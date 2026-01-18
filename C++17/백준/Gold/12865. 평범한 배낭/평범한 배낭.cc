#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<int> dp(K + 1, 0);

    for (int i = 0; i < N; i++)
    {
        int W, V;
        cin >> W >> V;
        
        for (int j = K; j >= W; j--)
            dp[j] = max(dp[j], dp[j - W] + V);
    }

    cout << dp[K] << '\n';

    return 0;
}