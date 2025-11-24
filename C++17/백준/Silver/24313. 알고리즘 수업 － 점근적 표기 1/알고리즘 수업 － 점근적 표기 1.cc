#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a1, a0;
    cin >> a1 >> a0;

    int c, n0;
    cin >> c >> n0;

    cout << (a1 <= c && a1 * n0 + a0 <= c * n0) ? 1 : 0 << '\n';

    return 0;
}