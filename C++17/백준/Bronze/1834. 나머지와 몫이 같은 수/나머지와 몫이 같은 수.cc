#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N;
    cin >> N;

    long long ans = (N + 1) * N * (N - 1) / 2;

    cout << ans << '\n';
    
    return 0;
}