#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        int posterArea = (x2 - x1) * (y2 - y1);

        int overlapW = max(min(x2, x4) - max(x1, x3), 0);
        int overlapH = max(min(y2, y4) - max(y1, y3), 0);
        int overlap = overlapW * overlapH;

        cout << posterArea - overlap << '\n';
    }

    return 0;
}