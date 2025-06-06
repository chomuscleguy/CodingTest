#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    priority_queue<int> maxHeap;

    while (N--)
    {
        int x;
        cin >> x;

        if (x == 0) {
            if (maxHeap.empty())
                cout << 0 << '\n';
            else
            {
                cout << maxHeap.top() << '\n';
                maxHeap.pop();
            }
        }
        else
            maxHeap.push(x);
    }

    return 0;
}
