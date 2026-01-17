#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<int> a(N);
    for (int i = 0; i < N; i++)
        cin >> a[i];

    int cur = 0;
    for (int i = 0; i < K; i++)
        cur += a[i % N];

    int ans = cur;

    for (int i = 1; i < N; i++)
    {
        cur -= a[(i - 1) % N];          
        cur += a[(i + K - 1) % N];      
        ans = max(ans, cur);
    }

    cout << ans << '\n';
}