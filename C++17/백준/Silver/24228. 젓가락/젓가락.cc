#include <iostream>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N, R;
    cin >> N >> R;

    long long res = N + 1 + 2 * (R - 1);
    cout << res << "\n";

    return 0;
}