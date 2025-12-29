#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> note(N);

        for (int i = 0; i < N; i++)
            cin >> note[i];

        sort(note.begin(), note.end());

        int M;
        cin >> M;
        
        while (M--)
        {
            int x;
            cin >> x;

            cout << (binary_search(note.begin(), note.end(), x) ? 1 : 0) << '\n';
        }
    }

    return 0;
}