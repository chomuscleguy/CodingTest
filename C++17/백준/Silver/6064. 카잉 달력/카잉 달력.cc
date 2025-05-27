#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int T; 
    cin >> T;

    while (T--)
    {
        int M, N, x, y;
        cin >> M >> N >> x >> y;

        int count = x;   
        int ny = (x - 1) % N + 1;
        unordered_set<int> visited;

        while (true)
        {
            if (ny == y)
            {
                cout << count << '\n';
                break;
            }

            if (visited.count(ny))
            {
                cout << -1 << '\n';
                break;
            }

            visited.insert(ny);

            count += M;
            ny = (ny + M - 1) % N + 1;
        }
    }

    return 0;
}
