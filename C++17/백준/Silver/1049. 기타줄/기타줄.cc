#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    int minBundle = 0x7FFFFFFF;
    int minSingle = 0x7FFFFFFF;

    while (M--)
    {
        int bundle, single;
        cin >> bundle >> single;

        minBundle = min(minBundle, bundle);
        minSingle = min(minSingle, single);
    }

    int case1 = minSingle * N;
    int case2 = minBundle * (N / 6) + minSingle * (N % 6);
    int case3 = minBundle * ((N + 5) / 6);

    cout << min({ case1, case2, case3 }) << '\n';

    return 0;
}